# JACoders "OpenJK" project #
[![Coverity Scan Build Status](https://scan.coverity.com/projects/1153/badge.svg)](https://scan.coverity.com/projects/1153)

IRC: irc.arloria.net / #JACoders ([webchat](http://unic0rn.github.io/tiramisu/jacoders/))

Forum: http://jkhub.org/forum/51-discussion/

The purpose of this project is to maintain and improve the Jedi Academy and Jedi Outcast games, developed by Raven Software. This project does not attempt to rebalance or otherwise modify core gameplay.

Major enhancement changes are very low priority at this time unless patches are made available and which do not alter the core functionality of gameplay or the stock renderer itself.

Please use discretion when making issue requests on github. The [JKHub sub-forum](http://jkhub.org/forum/51-discussion/) is a better place for larger discussions on changes that aren't actually bugs.

## Installation ##

First, install Jedi Academy. If you don't already own the game you can buy it from online stores such as [Steam](http://store.steampowered.com/app/6020/), [Amazon](http://www.amazon.com/Star-Wars-Jedi-Knight-Academy-Pc/dp/B0000A2MCN) or [Play](http://www.play.com/Games/PC/4-/127805/Star-Wars-Jedi-Knight-Jedi-Academy/Product.html?searchstring=jedi+academy&searchsource=0&searchtype=allproducts&urlrefer=search). Then unpack the OpenJK zip file to your Jedi Academy GameData folder.

## Maintainers (in alphabetical order) ##

* eezstreet
* Ensiform
* ImperatorPrime
* Razish
* redsaurus
* Xycaleth

## Significant contributors (in alphabetical order) ##

* exidl
* mrwonko
* Scooper
* Sil

## Dependencies ##

* OpenGL
* OpenAL (included on Windows)

## Developer Notes ##

OpenJK is licensed under GPLv2 as free software. You are free to use, modify and redistribute OpenJK following the terms in LICENSE.txt.

Please be aware of the implications of the GPLv2 licence. In short, be prepared to share your code.

### If you wish to contribute to OpenJK, please do the following ###
* [Fork](https://github.com/JACoders/OpenJK/fork) the project on Github
* Create a new branch and make your changes
* Send a [pull request](https://help.github.com/articles/creating-a-pull-request) to upstream (JACoders/OpenJK)

### If you wish to base your work off OpenJK (mod or engine) ###
* [Fork](https://github.com/JACoders/OpenJK/fork) the project on Github
* Change the GAMEVERSION define in codemp/game/g_local.h from "OpenJK" to your project name
* If you make a nice change, please consider backporting to upstream via pull request as described above. This is so everyone benefits without having to reinvent the wheel for every project.

### Links of Interest ###
* [Buildbot](http://jk.xd.cm/)
* [Buildbot builds](http://builds.openjk.org/)
* [JKHub sub-forum](http://jkhub.org/forum/51-discussion/)
