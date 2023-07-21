#include<iostream>
#include<vector>

using namespace std;

vector<int> onePlus(vector<int> nums){
    int last = nums.size()-1;
    while(last >= 0){
        if(nums[last] == 9){
            nums[last] = 0;
        }else{
            nums[last]++;
            return nums;
        }
        last--;
    }
    nums.insert(nums.begin(),1);
    return nums;
}

int main(){
   // cout << "One Plus " << "\n";
   vector<int> nums = {1,2,3};
   vector<int> ans = onePlus(nums);
   for(auto x : ans){
      cout << x << " ";
   }

  return 0;
}
