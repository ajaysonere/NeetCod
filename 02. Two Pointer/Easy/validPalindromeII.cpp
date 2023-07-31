#include<iostream>
using namespace std;

 bool helper(string s , int start , int end){
        while(start < end){
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int start = 0;
        int end  = s.size()-1;
        while(start < end){
            if(s[start] != s[end]){
               return helper(s , start+1, end) || helper(s , start ,end-1);
            }
            start++;
            end--;
        }
        return true;
    }

int main ()
{
    string str = "aba";
    if(validPalindrome(str)){
        cout << "Palindrome " << "\n";
    }else{
        cout << "Not Palindrome " << "\n";
    }
    return 0;
}