#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    vector<char> v1;

    for(char c : str){
        v1.push_back(c);
    }
    std::reverse(v1.begin(), v1.end());
    for(char c: v1){
        cout << c;
    }
    cout << endl;
    return 0;
}