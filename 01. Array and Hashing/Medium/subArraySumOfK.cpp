#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        int count = 0;
        int sum = 0;
        unordered_map<int,int>mp;
        for(int i=0; i<size; i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
}

int main ()
{
    vector<int> nums = {1,1,1};
    int k = 2;
    int ans = subarraySum(nums , k);
    cout << ans << "\n";
    return 0;
}