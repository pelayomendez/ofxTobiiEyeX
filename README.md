(WIP) www.pelayomendez.com based on www.propeller.se version

A wrapper of Tobii EyeX SDK 1.7 (C++) for OpenFrameworks 0.9.3
(Windows only!)

Some use instructions:

The Tobii EyeX SDK is not distributed within this repository. 
You may obtain it from http://developer.tobii.com/ and after that place 
'x86','x64' and 'include' folders of the distribution inside a folder 
called 'libs' on the addon.

In file ofApp.h include:
```
#include "ofxTobiiEyeX.h"
```

In class methods ofApp.h:
```
eyeXHost eyex;
```

In file ofApp.cpp setup() method add:
```
eyex.init();
```

In the update() method add these lines to use the raw data:
```
posX = eyex.gazePoint.x;
posY = eyex.gazePoint.y;
```

In the update() method add these lines to use the averaged data:
```
posX = eyex.gazePoint.x*0.25 + posX*0.75;
posY = eyex.gazePoint.y*0.25 + posY*0.75;
```

Use posX and posY as you please.
