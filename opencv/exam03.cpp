/*
    1. namespace my를 만드세요
    2. Point class 를 만드세요.
    3 Point pt(100, 200)을 cout 했을때 (100,200)으로 출력되도록 만들어 보세요.

    리턴타입 operator 연산자 연산자가 받는 인자
*/
#include <iostream>

namespace my{
    class Point{
    public:
        Point(){}
        Point(int x, int y) : _x(x), _y(y){}
        Point()
        int _x,_y;
    };
}

std::ostream& operator << (std::ostream& ){

}

int main()
{
    my::Point pt(100,200);

    std::cout<< pt << std::endl;
}