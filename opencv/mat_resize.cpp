#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat m = (cv::Mat_<uchar>(2, 4) << 1, 2, 3, 4, 5, 6, 7, 8);
    std::cout <<"[m] = " << std::endl << m << std::endl << std::endl;

    m.resize(1);    
    std::cout << "m.resize(1) = " << std::endl << m << std::endl << std::endl;
    
    m.resize(3);
    std::cout << "m.resize(3) = " << std::endl << m << std::endl << std::endl;

    m.resize(5, cv::Scalar(50));
    std::cout << "m.resize(5) = " << std::endl << m << std::endl << std::endl;
    return 0;
}