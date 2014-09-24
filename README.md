
Name
====

**eap8021x-debug**  - 802.1x MacOs X Mavericks client, debug version, for test and troubleshooting

Description 
===========

Just get Development/eapolclient and replace original eapolclient binary at /System/Library/SystemConfiguration/EAPOLController.bundle/Resources/eapolclient
You'll probably want to save the original, rename it before replace, this debuging version does the authentication but does not warn the Apple80211 framework, so MacOs X keep thinking that he needs to authenticate. Resuming you can debug 802.1x authentication using Xcode and attaching to the eapolclient started from the system, but this version cant be used in production. 

Todo/Problems
=============

* fix wireless.c, this is a just prototype version file, just for compile the binary file. I think if we can fix this file maybe we can build a full working version.
* To compile you will need to get other stuffs on http://opensource.apple.com (if you want those package working, send me an email).


Debug
=====

* After 'install' the eapolclient as explained in Description section, you can use Xcode and console.app to debug and get log about 802.1x authentication
