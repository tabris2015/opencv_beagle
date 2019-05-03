#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/videoio.hpp>
using namespace cv;
int main(int argc, char** argv )
{
    VideoCapture cap(0);
    cap.set(CAP_PROP_FRAME_WIDTH, 320);
    cap.set(CAP_PROP_FRAME_HEIGHT, 240);
    
    if(!cap.isOpened()) return -1;

    Mat image;
    cap >> image;

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    imwrite("cam.png", image);
    waitKey(0);
    return 0;
}