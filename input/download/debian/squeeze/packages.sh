#!/bin/sh
dpkg-scanpackages -m . > Packages
bzip2 -kf Packages

dpkg-scansources  . > Sources
bzip2 -kf Sources
