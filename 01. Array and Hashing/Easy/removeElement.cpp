#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>nums , int val){
    vector<int> temp;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != val){
            temp.push_back(nums[i]);
        }
    }
    nums = temp;
    for(auto x: nums){
        cout << x << " ";
    }

    return temp.size();
}


int main ()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int ans = removeElement(nums , val);
    cout << ans << "\n";
    return 0;
}