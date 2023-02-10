// Mat 행렬 초기화 (1, 0, 대각행렬)
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat m1 = cv::Mat::ones(3, 5, CV_8UC1);
    cv::Mat m2 = cv::Mat::zeros(3, 5, CV_8UC1);
    cv::Mat m3 = cv::Mat::eye(3, 3, CV_8UC1);

    std:: cout << "m1 : "<< std::endl << m1 << std::endl;

    std:: cout << "m2 : "<< std::endl << m2 << std::endl;

    std:: cout << "m3 : "<< std::endl << m3 << std::endl;

    return 0;
}