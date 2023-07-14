#include<iostream>
#include<vector>
using namespace std;

int removeElementB(vector<int>nums , int val){
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

int removeElementP(vector<int> nums , int val){
    int index =0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != val){
            nums[index++] = nums[i];
        }
    }
    return index;
}


int main ()
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    int ans = removeElementP(nums , val);
    cout << ans << "\n";
    return 0;
}