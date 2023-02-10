#include <iostream>
#include <opencv2/opencv.hpp>

class CVInfo
{
public:
    void print_matInfo(std::string m_name, cv::Mat m)
    {
        std::cout <<"[" << m_name << "행렬] "<< std::endl;

    }   
};

int main()
{
    cv::Mat m1(2, 6, CV_8U);
    cv::Mat m2 = m1.reshape(2);
    cv::Mat m3 = m1.reshape(3, 2);

    print_manInfo("m1(2, 6)", m1);
    print_manInfo("m2= m1.reshape(2)", m2);
    print_manInfo("m3 = m1.reshape(3, 2)", m3);

    return 0;
}