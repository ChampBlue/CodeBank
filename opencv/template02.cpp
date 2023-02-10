#include <iostream>

class Calculate{
public:
    template<typename T>
    T add(T a, T b)
    {
        return a + b;
    }

    template<typename T>
    T mns(T a, T b)
    {
        return a - b;   
    }
};

int main()
{
    Calculate cal;
    int num1, num2;
    std::cin >> num1 >> num2;

    int oper;
    std::cin >> oper;
    
    if(oper == 1) std::cout << cal.add(num1, num2) <<std::endl;
    else std::cout << cal.mns(num1, num2) <<std::endl;

    return 0;
}