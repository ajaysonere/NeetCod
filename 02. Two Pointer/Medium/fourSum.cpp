#include<bits/stdc++.h>
#include<vector>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() <= 3) return {};
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            for(int j=i+1; j<nums.size(); j++){
                if(j != i+1 && nums[j] == nums[j-1]) continue;
                int left = j+1;
                int right = nums.size()-1;
                while(left < right){
                    long sum = nums[i]+nums[j];
                    sum += nums[left];
                    sum += nums[right]; 
                    if(sum== target){
                        ans.push_back({nums[i] , nums[j] , nums[left] , nums[right]});
                        left++;
                        right--;
                        while(left < right &&  nums[left] == nums[left-1]) left++;
                        while(left < right && nums[right] == nums[right+1]) right--;
                    }else if(sum < target){
                        left++;
                    }else{
                        right--;
                    }
                }
            }
        }
        return ans;
}


int main ()
{
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans = fourSum(nums,target);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<< ans[i][j] << " ";
        }
        cout<<"\n";
    }
    return 0;
}