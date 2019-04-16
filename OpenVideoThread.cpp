//
//  threadedOpenVideo.cpp
//  VisionProcessing2019
//
//  Created by Margaret Peterson on 2/2/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#include "OpenVideoThread.hpp"


threadedOpenVideo::threadedOpenVideo() : video(0){
   mythread = thread(&OpenVideo::getImage, video, this->threadIntf);
}
