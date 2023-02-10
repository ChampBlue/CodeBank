#include <iostream>
#include <opencv2/highgui.hpp>

//using namespace cv;

int main()
{
    cv::Mat image(300, 400, CV_8UC1, cv::Scalar(150));
    cv::imshow("img", image);

    cv::waitKey(0);

    return 0;
}