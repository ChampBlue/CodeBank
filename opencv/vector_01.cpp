//stl 벡터
/* 배열과 벡터의 차이 
    1. 배열 -> 메모리 고정(메모리 낭비 있을 수 있음)
        벡터 -> 메모리 가변적으로 사용
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //1. vector 선언과 초기화
    vector<int> numbers = {1,2,3,4,5}; // 벡터 선언과 동시에 초기화

    for(int n: numbers) //for-each 문법 (numbers 멤버들을 NULL이 나올떄 까지 뽑아내겠다)
        cout << n << endl;
    
    cout << "-------------------------------------" << endl;
    //2. vector 선언 후 초기화
    vector<int> numbers2; //객체 선언(생성)
    for(int i = 1; i <= 4; i++){ //객체 초기화
        numbers2.push_back(i);
    }
    
    for(int n: numbers2) 
        cout << n << endl;

    return 0;
}