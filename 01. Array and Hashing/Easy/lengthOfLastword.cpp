#include<iostream>
using namespace std;

int getLength(string str){
    int count = 0;
    for(int i= str.size()-1; i>=0; i--){
        if(str[i] != ' ')count++;
        if(str[i] == ' ' && count > 0) break;
    }
    return count;
}

int main ()
{
    string str = "my name is ajay sonere  ";
    int lengthOfLastWord = getLength(str);
    cout << "Length Of Last Word " << lengthOfLastWord << "\n";
    return 0;
}