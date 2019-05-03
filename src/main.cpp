#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(int argc, char** argv )
{
    VideoCapture cap(0);
    if(!cap.isOpened()) return -1;

    Mat image;
    cap >> image;

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    imwrite("cam.jpg", image);
    waitKey(0);
    return 0;
}