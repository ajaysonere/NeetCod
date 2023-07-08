#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string> strs){
    string ans = "";
    sort(strs.begin(), strs.end());
    int size = strs.size();
    string first = strs[0];
    string last = strs[size - 1];

    for (int i = 0; i < first.size(); i++)
    {
        if (first[i] != last[i])
        {
            break;
        }
        ans += first[i];
    }
    return ans;
}

int main ()
{
    vector<string> strs = {"flower","flow","flight"};
    string ans = longestCommonPrefix(strs);
    cout << "Longest Common Prefix is : " << ans << "\n";
    return 0;
}