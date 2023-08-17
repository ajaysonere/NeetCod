#include<bits/stdc++.h>
using namespace std;

long long gridGame(vector<vector<int>>& grid) {
        int size = grid[0].size();
        vector<long long> prefix(size,0);
        vector<long long> suffix(size,0);
        for(int i=0; i<size; i++){
            if(i == 0){
                prefix[i] = grid[0][0];
            }else{
                prefix[i] = prefix[i-1]+grid[0][i];
            }
        }

        for(int j = size-1; j>=0; j--){
            if(j==size-1){
                suffix[j] = grid[1][j];
            }else{
                suffix[j] = suffix[j+1]+grid[1][j];
            }
        }

        long long ans =0, temp =0;
        for(int i=0; i<size; i++){
            if(i==0)
               ans = prefix[size-1]-prefix[0];
            temp = max(prefix[size-1] - prefix[i],suffix[0]-suffix[i]);
            ans = min(ans,temp);
        }
        return ans;
}

int main ()
{
    return 0;
}