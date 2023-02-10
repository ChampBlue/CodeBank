#include <iostream>

class Point
{
public:
    Point(){} //인자가 있는 생상자가 있으면 컴파일러가 디폴트 생성자는 안만들어줌 따라서 디폴트 생성자를 쓰고싶다면 디폴트생성자는 강제로 만들어야함
    Point(int x, int y) : x(x), y(y){}

    //멤버변수
    int x,y;
};
//연산자 오버로딩
    std::ostream& operator << (std::ostream& os, const Point& p){
        os << p.x << " " << p.y;
        return os;
    }

int main()
{
    Point pt(100,100);
    //std::cout << pt << std::endl; 연산자가 없다고 오류뜸 >> 연산자 오버로딩 필요
    std::cout << pt << std::endl; // 이제 됨
    std::cout << pt.x << ":"<< pt.y <<std::endl;

    return 0;
}