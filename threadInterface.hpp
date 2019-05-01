//
//  threadInterface.hpp
//  VisionProcessing2019
//
//  Created by Margaret Peterson on 2/2/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#ifndef threadInterface_hpp
#define threadInterface_hpp

#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/videoio.hpp"
#include <iostream>
#include "libuvc.h" //has to be libuvc/libuvc.h in pi
#include <thread>

using namespace std;
using namespace cv;

class threadInterface{
public:
   Mat *imgPtr;
   mutex imgMutex;
};


#endif /* threadInterface_hpp */
