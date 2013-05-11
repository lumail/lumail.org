#
# This is a templer-plugin.
#
# It is designed to read a series of files, and build a sorted list
# of the lua-primitives contained within them.
#
# Given a file which requires this plugin every file matching
# *.tmplr> will be tested.
#
# If the file contains a line "brief: ..." then the file will be
# considered a primitive, with the brief description listed.
#
# See <input/lua/index.tmplr> for invokation.
#
# Steve
# --

use strict;
use warnings;


package Templer::Plugin::primitives;

sub new
{
    my ( $proto, %supplied ) = (@_);
    my $class = ref($proto) || $proto;

    my $self = {};
    bless( $self, $class );
    return $self;
}


sub expand_variables
{
    my ( $self, $site, $page, $data ) = (@_);

    #
    #  Get the page-variables in the template.
    #
    my %hash = %$data;

    foreach my $key ( keys %hash )
    {
        if ( $key =~ /^primitives$/i )
        {

            #
            #  Where we find primitives on-disk.
            #
            #  (i.e. The same directory as the containing page.)
            #
            my $src = $page->source();
            my $dir = File::Basename::dirname($src);

            #
            #  The values we'll set
            #
            my $loop;

            #
            # Find all input-files that might contain lua-primitive
            # docs.
            #
            foreach my $file ( sort( glob( $dir . "/*.tmplr" ) ) )
            {

                # skip the invoking page.
                next if ( $file eq $src );

                # brief description of the primitive.
                my $brief = "";

                open( my $handle, "<", $file );
                while ( my $line = <$handle> )
                {
                    $brief = $1 if ( $line =~ /^brief: (.*)/ );
                }
                close($handle);

                warn "File $file didn't contain a brief: header"
                  unless ( length($brief) );

                #
                # The name of the function is the name of the file..
                #
                my $name = File::Basename::basename($file);
                $name =~ s/\.tmplr$//g;

                #
                # Add the found function to the list.
                #
                push( @$loop,
                      {  name  => $name,
                         brief => $brief
                      } ) if ( length($brief) );
            }

            #
            # Make the look-variable "primitives" available to the
            # page that invoked us.
            #
            $hash{ 'primitives' } = $loop if ($loop);
        }
    }

    return ( \%hash );
}


#
#  Register the plugin.
#
Templer::Plugin::Factory->new()->register_plugin("Templer::Plugin::primitives");
