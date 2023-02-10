#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    std::vector<cv::Point> v1;//객체생성
    cv::Point p1(10,20);
    
    cv::Point p3;
    p3.x = 50, p3.y = 60;

    v1.push_back(p1);
    v1.push_back(cv::Point (20,30));
    v1.push_back(p3);

    std::vector<float> v2(3.f, 9.25f);
    cv::Size arr_size[3] = {cv::Size(2, 2), cv::Size(3, 3), cv::Size(4, 4)};
    int arr_int[5] = {10, 20, 30, 40, 50};

    //배열 원소로 벡터 초기화
    std::vector<cv::Size> v3(arr_size, arr_size + (sizeof(arr_size) / sizeof(cv::Size)) );
    std::vector<int> v4(arr_int + 2, arr_int + sizeof(arr_int) / sizeof(int));
    //std::cout << "v1 :" << std::endl << (cv::Mat)v1 << std::endl; //Mat형으로 캐스팅)
    //std::cout << "v2 :" << std::endl << (cv::Mat)v2 << std::endl;
    //std::cout << "v2 reshape(1,1):" << std::endl << ((cv::Mat)v2).reshape(1, 1) << std::endl;
    //std::cout << "v3 :" << std::endl << (cv::Mat)v3 << std::endl;
    //std::cout << "v3.reshape(1,1) :" << std::endl << ((cv::Mat)v3).reshape(1,1) << std::endl;
    std::cout << "v4 :" << std::endl << (cv::Mat)v4 << std::endl;
    std::cout << "v4.reshape(1,1) :" << std::endl << ((cv::Mat)v4).reshape(1,1) << std::endl;
     
    return 0;
}