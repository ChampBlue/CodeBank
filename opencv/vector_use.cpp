#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void print_vectorInfo(std::string v_name, std::vector<int> v)
{
    std::cout << "[" << v_name << "] = ";
    if(v.empty()) std::cout << "벡터가 비었습니다." <<std::endl;
    else          std::cout << ((cv::Mat)v).reshape(1, 1) <<std::endl;

    std::cout <<".size() = " << v.size()<< std::endl;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    std::vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
    

    print_vectorInfo("v1", v1);
    std::cout <<".capacity() = " << v1.capacity() << std::endl <<std::endl;
    
    v1.insert(v1.begin() + 2, 100);
    print_vectorInfo("v1, insert(2)", v1);
    std::cout <<".capacity() = " << v1.capacity() << std::endl <<std::endl;

    v1.erase(v1.begin() + 3);
    print_vectorInfo("v1, erase(3)", v1);
    std::cout <<".capacity() = " << v1.capacity() << std::endl <<std::endl;

    v1.clear();
    print_vectorInfo("v1, clear()", v1);
    std::cout <<".capacity() = " << v1.capacity() << std::endl <<std::endl;

    return 0;
}