#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Size_<int> sz1(100, 200);
	Size		 sz2(200, 100);
	
	cout << "width : " << sz2.width << endl;   
	cout << "height : " << sz2.height << endl;   
	cout << "area : " << sz2.area() << endl;   

    //(3,4) 정수형 점을 힙 메모리에 만들어라

    Point2i *pt1 = new Point2i(3,4);

    delete pt1;

    return 0;
}