#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> removeElementUsingSet(vector<int>nums){
  set<int> st(nums.begin() , nums.end());
  vector<int>duplicate;
  for(auto x : duplicate){
    duplicate.push_back(x);
  }
  return duplicate;
}

int removeElementUsingVec(vector<int>&nums){
    int element = -2147484;
    int index = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] != element){
          element = nums[i];
          nums[index++] = element;
        }
    }
    return index;
}

int main(){
    vector<int> nums={1,1,2,5,5,5,10,10,20};
    int index = removeElementUsingVec(nums);
    for(int i=0; i<index; i++){
        cout << nums[i] << " ";
    }
    return 0;
}
