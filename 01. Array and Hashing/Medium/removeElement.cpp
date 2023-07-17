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
int main(){
    cout << "Remove Element" << "\n";
    return 0;
}
