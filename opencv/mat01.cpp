//Mat >> 화소를 집어 넣을수 있는 행렬
#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    float data[] = {
        1.2f, 2.3f, 3.2f,
        4.5f, 5.f , 6.5f
    }; 

    cv::Mat m1(2, 3, CV_8U);
    cv::Mat m2(2, 3, CV_8U, cv::Scalar(300));
    cv::Mat m3(2, 3, CV_16S, cv::Scalar(300));
    cv::Mat m4(2, 3, CV_32F, data); //float, depth=5

    //size객체로 Mat 객체를 선언방법 (Mat <--- 사진으로 생각하면 편함)
    cv::Size sz(3,2);
    cv::Mat m5(cv::Size(3,2), CV_64F);// double, depth=6
    cv::Mat m6(sz, CV_32F, data); //float, depth = 5

    std::cout << "m1 : " << std::endl << m1 << std::endl;
    std::cout << "m2 : " << std::endl << m2 << std::endl;
    std::cout << "m3 : " << std::endl << m3 << std::endl;
    std::cout << "m4 : " << std::endl << m4 << std::endl; 
    std::cout << "m5 : " << std::endl << m5 << std::endl; 
    std::cout << "m6 : " << std::endl << m6 << std::endl; 
    
    return 0;
}