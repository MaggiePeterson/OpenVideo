**OpenVideo for Vision Processing**
This library uses OpenCV and LIBUVC to open a usb connected camera, lower its exposure, and return the camera stream.

**Documentation**

- ```OpenVideo(int cameraIndex);```
Constructor 
cameraIndex -- ID of the camera to open. If a single camera is connected, pass 0.
Calls ChangeExposure() and opens the camera to start the stream.

- ```Mat getImage()```
returns the current frame as a cv::Mat

- ```void ChangeExposure()```
uses LIBUVC to lower the exposure of the camera

-VideoCapture * capture;
Pointer to cv::VideoCapture object.
More on [VideoCapture](https://docs.opencv.org/3.1.0/d8/dfe/classcv_1_1VideoCapture.html)










