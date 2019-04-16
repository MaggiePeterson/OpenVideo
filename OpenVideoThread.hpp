//
//  threadedOpenVideo.hpp
//  VisionProcessing2019
//
//  Created by Margaret Peterson on 2/2/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#ifndef threadedOpenVideo_hpp
#define threadedOpenVideo_hpp

#include <stdio.h>
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>
#include "libuvc.h" //has to be libuvc/libuvc.h in pi
#include <stdio.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <thread>
#include "OpenVideo.hpp"
#include "threadInterface.hpp"

using namespace cv;
using namespace std;

class threadedOpenVideo {
public:
   threadedOpenVideo();
   thread mythread;

private:
   OpenVideo video;
   threadInterface * threadIntf = new threadInterface();


};


#endif /* threadedOpenVideo_hpp */
