#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

long long power(long long x , long long y){
        if(y==1) return x;
        if(y==0) return 1;
        long long ans = 1;
        if(y%2 == 0){
            ans = power(x , y/2);
            ans *= ans;
        }else{
            ans = power(x , y-1);
            ans *= x;
        }
        return ans%mod;
    }
   
    int numSubseq(vector<int>& nums, int target) {
        long long  count = 0;
        int start = 0;
        int end = nums.size()-1;
        sort(nums.begin() , nums.end());
        while(start <= end){
            if(nums[start]+nums[end] <= target){
                count += power(2,(end-start));
                count %= mod;
                start++;
            }else{
                end--;
            }
        }
        return count%mod;
}

int main ()
{
    vector<int> nums = {3,3,6,8};
    int target;
    cin >> target;
    int ans = numSubseq(nums , target);
    cout << ans << "\n";
    return 0;
}