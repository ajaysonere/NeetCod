#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {
       
       set<vector<int>> st;
       sort(nums.begin() , nums.end());
       for(int i=0; i<nums.size(); i++){
           int left = i+1;
           int right = nums.size()-1;
           while(left < right){
               if(nums[i]+nums[left]+nums[right] == 0){
                   st.insert({nums[i],nums[left] , nums[right]});
                   left++;
                   right--;
               }else if((nums[i]+nums[left]+nums[right]) < 0){
                   left++;
               }else{
                   right--;
               }
           }
       }
       vector<vector<int>> ans(st.begin() , st.end());
       return ans;
}


int main ()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = threeSum(nums);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
           cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}