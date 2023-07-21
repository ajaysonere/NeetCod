#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElementUsingMap(vector<int> nums){
    unordered_map<int,int>mp;
    for(auto x : nums){
        if(++mp[x] > nums.size()/2){
            return x;
        }
    }
    return 0;
}

int main ()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans = majorityElementUsingMap(nums);
    cout << ans << "\n";
    return 0;
}