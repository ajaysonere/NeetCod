#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

vector<int> replaceElementWithMaxRight(vector<int> &nums)
{
    int size = nums.size();
    vector<int> arr(size, 0);
    arr[size - 1] = -1;
    int maxi = INT_MIN;
    for (int i = size - 2; i >= 0; i--)
    {
        maxi = max(maxi, nums[i + 1]);
        arr[i] = maxi;
    }
    return arr;
}

int main ()
{
    vector<int> nums = {17,18,5,4,6,1};
    vector<int> ans = replaceElementWithMaxRight(nums);
    for(int i=0 ; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}