#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int> nums){
    int leftMost[nums.size()] ;
        int rightMost[nums.size()];
        // making the left most element
        leftMost[0] = nums[0];
        for(int i=1; i<nums.size(); i++){
            leftMost[i] = leftMost[i-1]+nums[i];
        }
        // making right most
        rightMost[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2 ; i>= 0; i--){
            rightMost[i] = rightMost[i+1]+nums[i];
        }

        for(int i=0; i<nums.size(); i++){
            if(leftMost[i] == rightMost[i]){
                return i;
            }
        }
        return -1;
}


int main ()
{
    vector<int> nums = {1,7,3,6,5,6};
    int ans  = findPivotIndex(nums);
    cout << "Pivot Index is : " << ans << "\n";
    return 0;
}