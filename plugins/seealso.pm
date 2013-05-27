#
# This is a templer-plugin.
#
# Steve
# --

use strict;
use warnings;


package Templer::Plugin::seealso;

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
        if ( $key =~ /^seealso$/i )
        {
            #
            #  For each function we'll add it to the list.
            #
            my $value = $hash{$key};
            my $data ;

            foreach my $func ( sort( split( /,/ , $value ) ) )
            {
                $func =~ s/^\s+|\s+$//g;
                next unless( length( $func ) );

                if ( ! -e "./input/lua/$func.tmplr" ) {
                    warn "Function linked in " . $page->source() . " but not defined: $func\n";
                }

                push( @$data, { function => $func } );
            }

            #
            # Make the look-variable "primitives" available to the
            # page that invoked us.
            #
            $hash{ $key } = undef;
            $hash{ $key } = $data if ( $data );
        }
    }

    return ( \%hash );
}


#
#  Register the plugin.
#
Templer::Plugin::Factory->new()->register_plugin("Templer::Plugin::seealso");
