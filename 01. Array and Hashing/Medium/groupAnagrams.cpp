#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> str)
{
    vector<vector<string>> ans;
    unordered_map<string , vector<string>>mp;
    for(auto it : str){
        string temp = it;
        sort(it.begin() , it.end());
        mp[it].push_back(temp);
    }

    for(auto it : mp){
        vector<string> t = it.second;
        ans.push_back(t);
    }
    return ans;
}

int main ()
{
    vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(str);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}