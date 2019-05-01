//
//  OpenVideo.hpp
//  VisionProcessing2019
//
//  Created by Margaret Peterson on 1/14/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#ifndef OpenVideo_hpp
#define OpenVideo_hpp

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include "libuvc.h"
#include <unistd.h>
#include "threadInterface.hpp"
#include <iostream>

using namespace cv;
using namespace std;

#endif /* OpenVideo_h */

class OpenVideo {

public:
   OpenVideo(int camNum);
   static void cb(uvc_frame_t *frame, void *ptr);
   Mat* getImage(threadInterface * threadIntf);

private:
   void ChangeExposure();
   int webCamIndex;
   VideoCapture *capture;
};
