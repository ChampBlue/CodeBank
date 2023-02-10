#include <iostream>

using namespace std;

template <typename X>
X Max(X a, X b) {
    return (a > b) ? a : b;
}

int main()
{
    int val1 = Max(100, 500);
    cout << val1 << endl;

    double val2 = Max(700.12, -100.55);
    cout << val2 << endl;

    return 0;
}