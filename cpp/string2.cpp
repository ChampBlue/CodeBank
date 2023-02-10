#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string year;
    string age;
    
    cout << "input name : " << endl;
    cin >> name;
    cout << "input year : " << endl;
    cin >> year;
    cout << "input age : " << endl;
    cin >> age;

    cout << "이름 : ";
    cout << name << endl;
    cout << "출생년도 : ";
    cout << year << endl;
    cout << "나이 : ";
    cout << age << endl;

    return 0;
}