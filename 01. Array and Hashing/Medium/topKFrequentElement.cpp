#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> topKFrequentElement(vector<int> nums , int k){
     map<int , int> mp;
     for(auto x : nums){
        mp[x]++;
     }
     
}

int main ()
{
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topKFrequentElement(nums , k);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}