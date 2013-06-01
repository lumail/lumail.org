
lumail.org
==========

The site http://lumail.org/ is generated from a series of templates,
via the [templer static site generator](http://github.com/skx/templer).

This repository contains the source which is used to generate that site.


Building
--------

The repository contains two plugins which are used to simplify the
generation of the [lua primitive list](http://lumail.org/lua/), these
should work upon any sane GNU/Linux or Unix host.

To build the site, assuming you have templer installed, you should be
able to run `templer` with no arguments.

The supplied `Makefile` will do this automatically if called with
no arguments::

     precious ~/git/lumail.org $ make
     templer

     All done: 58 page(s) updated in less than 1 second.


Testing
-------

If you run `make serve` you can open the rebuilt site by point your browser
at the following URL:

* http://localhost:4433/

Steve
--