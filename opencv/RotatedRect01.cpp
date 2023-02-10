#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    Mat image(300, 500, CV_8UC1, Scalar(255)); // 배경만들기
    Point2f center(250, 150), pts[4]; //사각형 중앙점, 꼭지점
    Size2f size(300, 100); // 사각형 만들기
    RotatedRect rot_rect(center, size, 20); // 사각형 회전

    Rect bound_rect = rot_rect.boundingRect();
    rectangle(image, bound_rect, Scalar(0), 1); //rectangle 그리는 함수
    circle(image, rot_rect.center, 1, Scalar(0),2);// 원크리는 함수 (, , 반지름, (점,선)굵기)
    rot_rect.points(pts);

    for(int i = 0; i < 4; i++){
        circle(image, pts[i], 4, Scalar(0),1);
        line(image, pts[i], pts[(i+1)%4], Scalar(0),2);
    }

    //rectangle(image, Point(50,50), Point(200,200), Scalar(0), 3, 8, 0); 바로 사각형만들기


    imshow("회전사각형", image);
    waitKey(0);

    return 0;
}