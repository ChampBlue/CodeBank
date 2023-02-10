#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    double a = 31.12345678, b = 2.7;
    short c = 400;
    float d = 10.f, e = 11.f, f =12.f;

    cv::Mat_<int> m1(2, 4);
    cv::Mat_<uchar> m2(3, 4, 100);
    cv:: Mat_<short> m3(4, 5, c);

    m1 << 1,2,3,4,5,6;
    cv::Mat m4 = (cv::Mat_<double> (2,3)<<1,2,3,4,5,6);
    cv::Mat m5 = (cv::Mat_<float> (2,3) <<a,b,c,d,e,f);
    cv::Mat m6 = (cv::Mat_<float> (2,3) <<'a','b','c','d','e','f');

    std:: cout << "m1 : "<< std::endl << m1 << std::endl;
    std:: cout << "m2 : "<< std::endl << m2 << std::endl;
    std:: cout << "m3 : "<< std::endl << m3 << std::endl;
    std:: cout << "m4 : "<< std::endl << m4 << std::endl;
    std:: cout << "m5 : "<< std::endl << m5 << std::endl;
    std:: cout << "m6 : "<< std::endl << m6 << std::endl;
    
    return 0;
}