#include<iostream>
#include<vector>
using namespace std;

vector<int> productOfArray(vector<int> nums){
     int n = nums.size();
        vector<int> leftProduct(n);
        vector<int> rightProduct(n);

        leftProduct[0] = 1;
        for(int i=1; i<nums.size(); i++){
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
        }

        rightProduct[n-1] = 1;
        for(int j = n-2; j>=0; j--){
            rightProduct[j] = rightProduct[j+1] * nums[j+1];
        }

        vector<int> ans(n);
        for(int k = 0; k<n; k++){
            ans[k] = leftProduct[k] * rightProduct[k];
        }
        return ans;
}

int main ()
{
    vector<int> nums = {1,2,3,4};
    vector<int> ans = productOfArray(nums);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}