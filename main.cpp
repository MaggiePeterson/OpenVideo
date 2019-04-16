//
//  main.cpp
//  OpenVideo
//
//  Created by Margaret Peterson on 4/13/19.
//  Copyright © 2019 Margaret Peterson. All rights reserved.
//

#include "OpenVideo.hpp"
using namespace cv;

int main(int argc, char **argv) {

   OpenVideo myCamera(1); 
   char keyboard = 0;

   //opens camera continuously until user presses q
   while (keyboard != 'q'){
      imshow("Frame", myCamera.getImage());
      keyboard = (char)waitKey( 30 );
   }
   cvDestroyWindow("Frame");

   return 0;
}
