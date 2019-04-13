//
//  main.cpp
//  OpenVideo
//
//  Created by Margaret Peterson on 4/13/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#include "OpenVideo.hpp"
using namespace cv;


/* This callback function runs once per frame. Use it to perform any
 * quick processing you need, or have it put the frame into your application's
 * input queue. If this function takes too long, you'll start losing frames. */

int main(int argc, char **argv) {


   OpenVideo myCamera(1); //OpenVideo objects takes in int CameraIndex
   char keyboard = 0;

   //opens camera continuously until user presses q
   while (keyboard != 'q'){
      imshow("Frame", myCamera.getImage());
      keyboard = (char)waitKey( 30 );
   }
   cvDestroyWindow("Frame");

   return 0;
}
