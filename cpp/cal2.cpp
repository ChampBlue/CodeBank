#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    
    for (i; i <= 100; i++) {
        if (i % 2 != 0)
            cout << i << " ";     
    }
    cout << endl;

    return 0;
}

