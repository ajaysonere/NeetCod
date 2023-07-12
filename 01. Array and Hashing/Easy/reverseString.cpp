#include<iostream>
using namespace std;

void reverseString(string &s){
    int start = 0;
    int end = s.size()-1;
    while(start <end){
        swap(s[start++] , s[end--]);
    }
}

int main ()
{
    string str = "hello";
    reverseString(str);
    cout << str << "\n";
    return 0;
}