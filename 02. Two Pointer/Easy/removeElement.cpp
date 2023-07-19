#include<iostream>
using namespace std;
vector<int> removeElementUsingSet(vector<int>nums){
  set<int> st(nums.begin() , nums.end());
  vector<int>duplicate;
  for(auto x : duplicate){
    duplicate.push_back(x);
  }
  return duplicate;
}

vector<int>removeElementUsingVec(vector<int>nums){
    
}

int main(){
    vector<int> nums={1,1,2,5,5,5,10,10,20};
    vector<int>ans = removeElementUsingSet(nums);
    for(auto x : ans){
      cout << ans << endl;
    }
    return 0;
}
