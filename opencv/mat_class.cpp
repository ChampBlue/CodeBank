#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    cv::Mat m1(4, 3, CV_32FC3);
    cout << "차원 수 = " << m1.dims << endl;
    cout << "행 개수 = " << m1.rows <<endl;
    cout << "열 개수 = " << m1.cols << endl;
    cout << "행렬의 크기 = " << m1.size() << endl <<endl;
    
    cout << "전체 원소의 개수 = " << m1.total() << endl;
    cout << "한 원소의 크기 = " <<m1.elemSize() << endl;
    cout << "채널당 한 원소의 크기 = "<< m1.elemSize1() << endl << endl;

    cout << "타입 = " << m1.type() << endl;
    cout << "타입(채널 수 | 깊이) = " <<(m1.channels()-1 << 3) + m1.depth() << endl;
    cout << "깊이 = " << m1.depth() << endl;
    cout << "채널 = " << m1.channels() << endl << endl;
    
    cout << "step = " << m1.step << endl;
    cout << "step1() = " << m1.step1() << endl; //step을 elemSize1로 나누어서 정규화된 step반환

    return 0;
}