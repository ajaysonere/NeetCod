#include<iostream>
#include<vector>

using namespace std;

vector<int> sortColors(vector<int> &nums) {
        // sort(nums.begin(),nums.end());
        vector<int> ans(nums.size());
        int index = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                ans[index] = nums[i];
                index++;
            }
        }

        for(int i=0; i<nums.size();i++){
            if(nums[i] == 1){
                ans[index] = nums[i];
                index++;
            }
        }

        for(int i=0;i<nums.size(); i++){
            if(nums[i]==2){
                ans[index++] = nums[i];
            }
        } 
        return ans;
}


int main ()
{
    vector<int>nums = {2,0,2,1,1,0};
    vector<int> ans = sortColors(nums);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}