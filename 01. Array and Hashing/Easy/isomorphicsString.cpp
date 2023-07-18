#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

 bool isIsomorphic(string s, string t) {
        unordered_map<char , vector<int>> mp1;
        unordered_map<char , vector<int>> mp2;
        for(int i=0; i<s.size(); i++){
            mp1[s[i]].push_back(i);
            mp2[t[i]].push_back(i);
            if(mp1[s[i]] != mp2[t[i]]){
                return false;
            }
        }
        return true;
    }

int main ()
{
        string s = "paper";
        string t = "title";
        if(isIsomorphic(s,t)){
            cout<< "True" << "\n";
        }else{
            cout << "False" << "\n";
        }
        return 0;
}