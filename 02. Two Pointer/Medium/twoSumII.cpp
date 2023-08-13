#include<iostream>
#include<vector>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans ;
        int start = 0;
        int end = nums.size()-1;
        while(start < end){
            if(nums[start]+nums[end] == target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }else if(nums[start]+nums[end] > target){
                end--;
            }else{
                start++;
            }
        }
        return ans;
}


int main ()
{
    vector<int> nums = {10,2,0,30,40,50,20,30};
    int target = 10;
    vector<int>ans = twoSum(nums , target);
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}