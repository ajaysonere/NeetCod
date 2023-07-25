#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

 int maxNumberOfBalloons(string text) {
        vector<int> freq(26 , 0);
        for(int i=0; i<text.size(); i++){
            int k = text[i]-'a';
            freq[k]++;
        }
        string str = "balloon";
        int ans = INT_MAX;
        for(auto x : str){
            if(x == 'l' || x == 'o'){
                ans = min(ans , freq[x-'a']/2);
            }else{
                ans = min(ans , freq[x-'a']);
            }
        }        
       return ans;
    }

int main ()
{
    string s = "loonbalxballpoon";
    int numberOfTimes = maxNumberOfBalloons(s);
    cout << "Maximum number of balloons : " << numberOfTimes << "\n";
    return 0;
}