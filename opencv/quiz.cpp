#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    std::vector <std::vector<int>> arr3(3, std::vector<int>(3,0));

    int cnt = 1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            arr3[j][i] = cnt++;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            std::cout <<arr3[j][i] << " ";
        std::cout << std::endl; 
    }
    return 0;
}