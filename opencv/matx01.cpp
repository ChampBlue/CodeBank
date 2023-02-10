#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;

int main()
{
    cv::Matx<int, 3,3> m1(1,2,3,4,5,6,7,8,9);
    cv::Matx<float, 2, 3> m2(1,2,3,4,5,6);
    cv::Matx<double, 3,5> m3(3,4,5,7);

    cv::Matx23d m4(3,4,5,6,7,8);
    cv::Matx34d m5(1,2,3,10,11,12,13,14,15);
    cv::Matx66f m6(1,2,3,4,5,6,7,8,9,10);

    cout << "m1 : " << endl << m1 << endl;
    cout << "m2 : " << endl << m2 << endl;
    cout << "m3 : " << endl << m3 << endl;
    cout << "m4 : " << endl << m4 << endl;
    cout << "m5 : " << endl << m5 << endl;
    cout << "m6 : " << endl << m6 << endl;

    return 0;
}


