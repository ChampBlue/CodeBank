//템플렛 문법
#include <iostream>

using namespace std;

template<typename T>
T Max(T a, T b) { // T -> 타입
    int result;
    if (a > b){
        return a;
    } else return b;

    //return (a > b) ? a : b;
}

int main()
{
    cout << Max(100, 200) << endl;
    cout << Max(100.55, 200.34) << endl;
    cout << Max('C', 'F') <<endl;

    return 0;
}