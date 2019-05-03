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
    std::cout << "creando dispositivo \n";
    VideoCapture cap(0);
    cap.set(CAP_PROP_FRAME_WIDTH, 320);
    cap.set(CAP_PROP_FRAME_HEIGHT, 240);
    std::cout << "resolucion: 320x240 \n";
    if(!cap.isOpened()) return -1;

    Mat image;
    std::cout << "leyendo imagen \n";
    cap >> image;

    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    std::cout << "guardando imagen \n";
    imwrite("cam.png", image);
    waitKey(0);
    return 0;
}