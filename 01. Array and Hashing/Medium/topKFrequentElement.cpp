#include<iostream>
#include<vector>
#include<map>
#include<bits/stdc++.h>

using namespace std;

vector<int> topKFrequentElement(vector<int> nums , int k){
     map<int , int> mp;
     for(auto x : nums){
        mp[x]++;
        break;
     }


}

vector<int> topKFrequentElementUsingPriQueue(vector<int> nums , int k){
        map<int ,int >mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>>m;
        for(auto x : mp){
            m.push(make_pair(x.second , x.first));
        }

        vector<int> ans;
        while(k>0){
           ans.push_back(m.top().second);
           m.pop();
           k--;
        }
        return ans;
}

int main ()
{
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    vector<int> ans = topKFrequentElementUsingPriQueue(nums, k);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}