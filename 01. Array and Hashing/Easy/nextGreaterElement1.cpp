#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int> nums1 , vector<int>nums2){
    vector<int> ans(nums1.size()); 
        for(int i=0; i<nums1.size(); i++){
            int j = nums2.size()-1; 
            int minElement = -1;
            while( j >= 0 && nums2[j] != nums1[i]){
                if(nums2[j] > nums1[i]){
                    minElement = nums2[j];
                }
                j--;
            }
            ans[i] = minElement;
        }
        return ans;
}


int main ()
{
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};
    vector<int> ans = nextGreaterElement(nums1 , nums2);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}