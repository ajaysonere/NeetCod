#include<iostream>
#include<vector>
using namespace std;

class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        // return accumulate(this->nums.begin()+left , this->nums.begin()+right+1 , 0);
        // int sum = 0;
        // for(int i=left; i<= right; i++){
        //     sum += nums[i];
        // }
        // return sum;
        vector<int> prefix(nums.size());
        prefix[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        if(left == 0){
            int x = prefix[right];
            return x;
        }else{
            int x = prefix[right]-prefix[left-1];
            return x;
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */ 

int main ()
{
    return 0;
}