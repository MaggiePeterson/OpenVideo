# **OpenVideo for Vision Processing**

This library uses OpenCV and LIBUVC to open a usb connected camera, lowers its exposure, and returns the camera stream.

## **Documentation**

- ```OpenVideo(int cameraIndex)```

   Constructor <br/>
   cameraIndex -- ID of the camera to open. If a single camera is connected, pass 0. <br/>
   Calls ChangeExposure() and opens the camera to start the stream.

- ```Mat getImage()```

   returns the current frame as a cv::Mat

- ```void ChangeExposure()```

   uses LIBUVC to lower the exposure of the camera
   
- ```VideoCapture * capture```

   Pointer to cv::VideoCapture object.
   More on [VideoCapture](https://docs.opencv.org/3.1.0/d8/dfe/classcv_1_1VideoCapture.html)

## **Installing**

## **Libraries**

[OpenCV](https://docs.opencv.org/3.0-beta/modules/refman.html) <br/>
[LibUVC](https://ken.tossell.net/libuvc/doc/)  







