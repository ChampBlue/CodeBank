#include <iostream>
#include <opencv2/highgui.hpp>

//using namespace cv;

int main()
{
    cv::Mat image = cv::imread("abc.png", cv::IMREAD_COLOR); //imread(" ", ) : 사진의 화소값을 읽는 함수//IMREAD_COLOR == 1 == 칼라
    cv::imshow("img", image);

    cv::waitKey(0);

    return 0;
}