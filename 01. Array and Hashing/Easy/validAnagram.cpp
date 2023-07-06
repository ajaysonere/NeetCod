#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s , string t){
    if(s.length() != t.length()){
        return false;
    }

    vector<int> freq(26 ,0);
    for(int i=0; i<s.size(); i++){
        int up = s[i]-'a';
        int down = t[i]-'a';
        freq[up]++;
        freq[down]--;
    }
    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    return true;
}

int main ()
{
    string s = "anagram";
    string t = "anamrag";
    if(isAnagram(s,t)){
        cout << "Strings are anagram " << "\n";
    }else{
        cout << "Strings are not anagram " << "\n";
    }
    return 0;
}