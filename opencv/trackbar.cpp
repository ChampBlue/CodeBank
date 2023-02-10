#include <iostream>
#include <opencv2/opencv.hpp>

std::string title = "트랙바 이벤트";
cv::Mat image;

void onChange(int value, void* userdata)
{
    int add_value = value - 130;
    std::cout << "추가 화소값" << add_value << std::endl;

    cv::Mat tmp = image + add_value;
    imshow(title, tmp);

}

int main()
{
    int value = 128;
    image = cv::Mat(300, 400, CV_8UC1, cv::Scalar(120));
    
    cv::namedWindow(title, cv::WINDOW_AUTOSIZE);
    cv::createTrackbar("밝기값", title, &value, 255, onChange);
    
    imshow(title, image);
    cv::waitKey(0);

    return 0;
}