#include<iostream>
#include<vector>
using namespace std;

vector<int> concatinationOfArray(vector<int> vec){
    vector<int> ans = vec;
    for(auto x : vec){
        ans.push_back(x);
    }
    return ans;
}

int main(){
    
    vector<int> vec = {1,2,3,4};
    vector<int> ans = concatinationOfArray(vec);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}