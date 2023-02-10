#include <iostream>

using namespace std;

int main()
{
    int width = 0;
    int height = 0;
    int area = 0.0;
    
    cout <<"input width : ";
    cin >> width;
    if(width > 1000) {
        cout << "out of range" << endl;
        exit(0);
    }

    cout <<"input height : "; 
    cin >> height;
    if(height > 1000) {
        cout << "out of range" << endl;
        exit(0);
    }
    
    area = width*height/2.0; 
    std::cout << area << std::endl;

    return 0;
}