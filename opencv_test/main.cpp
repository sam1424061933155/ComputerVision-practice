#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv/cvaux.hpp>
#include <fstream>
using namespace std;

#define BYTE unsigned char

int main(int argc, const char * argv[])
{
    //这个地方的目录需要改成自己的
    IplImage* img = cvLoadImage("/Users/sam/Desktop/test.jpeg", 1);
    //NSLog(img);
    //create a window to display the image
    cvNamedWindow("picture", 1);
    //show the image in the window
    cvShowImage("picture", img);
    //wait for the user to hit a key
    cvWaitKey(0);
    //delete the image and window
    cvReleaseImage(&img);
    cvDestroyWindow("picture");
    return 0;
}
