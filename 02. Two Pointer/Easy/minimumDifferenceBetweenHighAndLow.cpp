#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        int i = 0;
        int j = k-1;
        int ans = INT_MAX;
        while(j<nums.size()){
            ans = min(ans , nums[j++] - nums[i++]);
        }
        return ans;
    }

int main ()
{
        vector<int> nums = {9, 4, 1, 7};
        int k = 2;
        int ans = minimumDifference(nums , k);
        cout << ans << "\n";
        return 0;
}