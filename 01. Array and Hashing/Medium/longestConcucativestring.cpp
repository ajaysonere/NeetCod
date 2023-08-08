#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin() , nums.end());
        int count = 1;
        int longest = 1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(nums[i] == nums[i+1]-1){
                count++;
                if(count > longest){
                    longest = count;
                }
            }else{
                count = 1;
            }
        }
        return longest;
}

int longestConsecutiveOp(vector<int> nums){
        set<int> s(nums.begin() , nums.end());
        int longest = 0;
        for(auto i : s){
            if(s.count(i-1)) continue;
            int j =1;
            while(s.count(i+j)){
                j++;
            }
            longest = max(longest , j);
        }
        return longest;
}

int main ()
{
   vector<int> nums = {100,4,200,1,3,2};
   int ans = longestConsecutiveOp(nums);
   cout << ans << "\n";
   return 0;
}