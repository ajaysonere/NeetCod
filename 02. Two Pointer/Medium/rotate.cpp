#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &nums, int start , int end){
       while(start < end){
           swap(nums[start++] , nums[end--]);
       }
   }

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    int d = k%n;
    reverseArray(nums , 0 , n-d-1);
    reverseArray(nums,n-d,nums.size()-1);
    reverseArray(nums , 0, nums.size()-1);
}

int main ()
{
    vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums , k);
    for(auto x : nums){
        cout << x << " ";
    }
    return 0;
}