#
# This is a templer-plugin.
#
# It is designed to take a line like this:
#
#   foo: filedate(path/to/date)
#
# and expand the date of the specified file into the variable `foo`.
#
# Steve
# --

use strict;
use warnings;

use POSIX qw(strftime);

package Templer::Plugin::filedate;

#
#  Add suffix to number:
#
#  1 -> 1st
#  2 -> 2nd
# 15 -> 15th
#
sub suffix
{

    local $_ = shift;
    my $suf = 'th';
    if ( !/1.$/ )
    {
        $suf = 'st' if /1$/;
        $suf = 'nd' if /2$/;
        $suf = 'rd' if /3$/;
    }
    return $_ . $suf;
}

#
# Constructor
#
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
        my $val = $hash{ $key };

        if ( $val =~ /^filedate\(([^)]+)\)$/i )
        {
            my $file = $1;

            #
            #  Strip leading/trailing quotes and whitespace.
            #
            $file =~ s/['"]//g;
            $file =~ s/^\s+|\s+$//g;

            #
            #  If the file is unqualified then make it refer to the
            # path of the source file.
            #
            my $dirName = $page->source();
            if ( $dirName =~ /^(.*)\/(.*)$/ )
            {
                $dirName = $1;
            }
            my $pwd = Cwd::cwd();
            chdir( $dirName . "/" );

            #
            # Get the details of the file.
            #
            my ( $dev,   $ino,     $mode, $nlink, $uid,
                 $gid,   $rdev,    $size, $atime, $mtime,
                 $ctime, $blksize, $blocks
               )
              = stat($file);

            #
            # Reset the CWD.
            #
            chdir($pwd);

            #
            #  Now update the value of the variable to be the date/time
            # of the file.
            #
            #  Use variables here specifically to add ordinals.
            # eg 1 -> "1st".
            #   22 -> "22nd".
            #
            my $day = POSIX::strftime( "%d", localtime($mtime) );
            $day = suffix($day);
            my $mon = POSIX::strftime( "%B", localtime($mtime) );
            my $yr  = POSIX::strftime( "%Y", localtime($mtime) );

            $hash{ $key } = $day . " " . $mon . " " . $yr;
        }
    }

    return ( \%hash );
}


#
#  Register the plugin.
#
Templer::Plugin::Factory->new()->register_plugin("Templer::Plugin::filedate");
