#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
    double data[] = {
        1.1, 2.2, 3.3, 4.4,
        5.5, 6.6, 7.7, 8.8,
        9.9, 10, 11
    };

    Mat m1(3, 4, CV_64F, data);
    Mat m2 = m1.clone(); // 깊은 복사 //Mat m2 = m1; //얇은 복사(별명)
    
    m2 = 100;
    cout << "m1 = " << endl << m1 << endl;
    cout << "m2 = " << endl << m2 << endl;

    Mat m3, m4;
    m1.copyTo(m3);
    m1.convertTo(m4, CV_8U);
    
    cout << "m3 = " << endl << m3 << endl;
    cout << "m4 = " << endl << m4 << endl;

    return 0;
}