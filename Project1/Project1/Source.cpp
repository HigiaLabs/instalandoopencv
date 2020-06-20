#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/objdetect.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
    VideoCapture cap(0);
    cap.open(0);
    Mat img;
    CascadeClassifier face_cascade;
    face_cascade.load("haarcascade_frontalcatface.xml");
    while (true)
    {
        cap >> img;
        cap.retrieve(img);
        resize(img, img, Size(1000, 640));
        imshow("Aaooba !", img);
        int key2 = waitKey(20);
    }
    return 0;
}