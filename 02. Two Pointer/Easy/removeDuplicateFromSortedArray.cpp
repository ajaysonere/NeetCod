#include<iostream>
#include<vector>
#include<set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(auto x: nums){
            s.insert(x);
        }
        int index = 0;
        for(auto it = s.begin(); it != s.end(); it++ ){
            nums[index++] = *it;
        }
        return s.size();
}

int removeDuplicatesOpt(vector<int>&nums){
    int size = nums.size();
        int i = 0;
        int seen = INT_MIN;
        for(int j=0; j<size; j++){
           if(nums[j] != seen){
               seen = nums[j];
               nums[i++] = seen;
           }
        }
        return i;
}


int main ()
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int ansIndex = removeDuplicates(nums);
    for(int i=0; i<ansIndex; i++){
        cout << nums[i] << " ";
    }
    return 0;
}