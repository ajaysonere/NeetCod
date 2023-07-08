#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

pair<int,int> twoSum(vector<int> nums , int target){
        pair<int,int>ans;
        unordered_map<int,int>mp;
        mp[nums[0]] = 0;
        for(int i=1; i<nums.size();i++){
            int value = target-nums[i];
            if(mp.find(value) != mp.end()){
               ans.first = mp.find(value)->second;
               ans.second = i;
               return ans;
            }
            mp[nums[i]] = i; 
        }
        return ans;

}

int main ()
{
    vector<int> sum = {2,7,11,15};
    int target = 9;
    pair<int,int> ans = twoSum(sum , target);
    cout << ans.first << " " << ans.second << "\n";
    return 0;
}