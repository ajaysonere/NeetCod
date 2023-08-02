#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        int count =0;
        for(auto x : nums){
            if(x == 0) count++;
            else ans.push_back(x);
        }
        while(count >0 ){
            ans.push_back(0);
            count--;
        }
        nums = ans;
}

void moveZerosOptimized(vector<int> &nums){
     int index =0;
        for(int i=1; i<nums.size(); i++){
            if(nums[index] == 0 && nums[i] != 0){
                swap(nums[index] , nums[i]);
                index++;
            }else if(nums[index] == 0 && nums[i]==0){
                continue;
            }else{
                index++;
            }
        }
}


int main ()
{
    vector<int> nums = {0,1,0,3,12};
    moveZerosOptimized(nums);
    for(auto x : nums){
        cout << x << " ";
    }
    return 0;
}