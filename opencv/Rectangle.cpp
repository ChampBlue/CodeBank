#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat image(300, 300, CV_8UC1, cv::Scalar(255));
    
    rectangle(image, cv::Point(50,50), cv::Point(200,200), cv::Scalar(0), 3, 8, 0); 

    cv::imshow("사각형", image);
    cv::waitKey(0);
    
    return 0;
}