#include<iostream>
using namespace std;

string mergeAlternately(string word1, string word2) {
        string temp;
        int i=0 , j=0;
        while(i < word1.size() && j < word2.size()){
            temp += word1[i++];
            temp += word2[j++];
        }
        while(i<word1.size()){
            temp +=word1[i++];
        }
        while(j<word2.size()){
            temp += word2[j++];
        }
        return temp;
}

int main ()
{
    string str1 = "abc";
    string str2 = "xyz";
    string ans = mergeAlternately(str1 , str2);
    cout << ans << "\n";
    return 0;
}