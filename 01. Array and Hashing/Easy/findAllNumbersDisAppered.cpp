#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int>  findAllNumbersDisAppered(vector<int>&nums){
    unordered_set<int> st(nums.begin() , nums.end());
    vector<int> ans;
    int disNumber = 1;
    for(int i=0; i<nums.size(); i++){
        if(st.count(disNumber) == 0){
           ans.push_back(disNumber);
        }
        disNumber++;
    }
    return ans;
}

int main ()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> ans = findAllNumbersDisAppered(nums);

    for(auto x : ans){
      cout << x << " ";
    }
    return 0;
}