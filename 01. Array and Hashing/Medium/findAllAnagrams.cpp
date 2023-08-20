#include<iostream>
#include<vector>
using namespace std;


vector<int> findAnagrams(string s, string p) {
      if(p.size() > s.size()) return {};
       vector<int>pfreq(26,0);
       vector<int>sfreq(26,0);
       for(int i=0;i<p.size();i++){
           pfreq[p[i]-'a']++;
       }         
       vector<int>ans;
       for(int i=0; i<=s.size()-p.size(); i++){
          for(int j=0;j<p.size();j++){
              sfreq[s[j+i]-'a']++;
          }

          bool isPresent = true;
          for(int k=0;k<26; k++){
              if(pfreq[k] != sfreq[k]){
                  isPresent = false;
              }
          }
          if(isPresent == true)
             ans.push_back(i);

           for(int i=0;i<26;i++){
               sfreq[i] = 0;
           }       
       }
       return ans;
}

int main ()
{
 return 0;
}