#!/bin/sh
dpkg-scanpackages . > Packages
bzip2 -kf Packages

dpkg-scansources . > Sources
bzip2 -kf Sources
