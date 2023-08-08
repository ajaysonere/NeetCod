#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i = 1;
        while(i<nums.size()){
            if(nums[i-1] == nums[i] && count < 2){
                count++;
                i++;
            }else if(nums[i-1] == nums[i]){
                nums.erase(nums.begin()+i);
            }else if(nums[i-1]!= nums[i]){
                count = 1;
                i++;
            }
        }
        return nums.size();
}

int main ()
{
    vector<int> nums = {1,1,1,2,2,3};
    removeDuplicates(nums);
    for(auto x : nums){
        cout << x << " "; 
    }
    return 0;
}