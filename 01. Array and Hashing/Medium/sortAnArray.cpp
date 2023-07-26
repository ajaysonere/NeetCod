#include<iostream>
#include<vector>
using namespace std;

vector<int> sortArrayByNaive(vector<int> nums){

    for(int i=0;i<nums.size()-1; i++){
        for(int j=0; j<nums.size()-i-1; j++){
            if(nums[j] > nums[j+1]){
               swap(nums[j] , nums[j+1]);
            }
        }
    }
    return nums;
}

int main ()
{
    vector<int> nums = {1,20,3,5,4,65,32,45,10};
    vector<int> ans = sortArrayByNaive(nums);
    for(auto x : ans)
       cout << x << " ";
    
    return 0;
}