#include<bits/stdc++.h>
#include<vector>
using namespace std;

int maxArea(vector<int>& nums) {
        int ans = INT_MIN;
        int start = 0;
        int end = nums.size()-1;
        while(start < end){
            int temp = min(nums[start] , nums[end]);
            ans = max(ans , temp*(end-start));
            if(nums[start] < nums[end]) start++;
            else end--;
        }
        return ans;
    }

int main ()
{
    vector<int>nums = {1,8,6,2,5,4,8,3,7};
    int ans = maxArea(nums);
    cout << ans << "\n";
    return 0;
}