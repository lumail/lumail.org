

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
            my $path = $page->source();
            $path =~ s/index.tmplr//g;

            #
            #  The values we'll set
            #
            my $loop;

            foreach my $file ( sort( glob( $path . "*.tmplr" ) ) )
            {
                next if ( $file =~ /index.tmplr/i );

                my $brief = "";

                open( my $handle, "<", $file );
                while( my $line = <$handle> )
                {
                    $brief = $1 if ( $line =~ /^brief: (.*)/ );

                }
                close( $handle );

                my $name = File::Basename::basename( $file );
                $name =~ s/\.tmplr$//g;

                push( @$loop,
                    {  name => $name ,
                       brief =>$brief } );
            }


            $hash{ 'primitives' } = $loop if ($loop);
        }
    }

    return ( \%hash );
}


#
#  Register the plugin.
#
Templer::Plugin::Factory->new()
  ->register_plugin("Templer::Plugin::primitives");
