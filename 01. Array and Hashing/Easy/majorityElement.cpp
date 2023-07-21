#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int majorityElement(vector<int> nums){
    unordered_map<int,int>mp;
    for(auto x : nums){
        if(++mp[x] > nums.size()/2){
            return x;
        }
    }
    return 0;
}
// function overloading
int majorityElement(vector<int>nums , int size){
        int count =1;
        int major = nums[0];
        for(int i=1; i<size; i++){
            if(count == 0){
                count++;
                major = nums[i];
            }else if(major == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return major;
}

int main ()
{
    vector<int> nums = {2,2,1,1,1,2,2};
    int ans = majorityElement(nums);
    int ans1 = majorityElement(nums , nums.size());
    cout << ans << " " << ans1 << "\n";
    return 0;
}