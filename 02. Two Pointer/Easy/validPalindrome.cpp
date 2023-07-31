#include<iostream>
using namespace std;

bool isPalindromeHelper(string str){
        int start =0 ;
        int end = str.size()-1;
        while(start < end){
            if(str[start] != str[end])
              return false;
            start++;
            end--;
        }
        return true;
    }
 
    bool isPalindrome(string s) {
        string temp = "";
        for(int i=0; i<s.size(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z') || s[i] >= '0' && s[i] <= '9'){
                if(s[i] >= 'A' && s[i] <= 'Z'){
                    temp += s[i]+32;
                }else{
                   temp += s[i];
                }
            }
        }
        
        return isPalindromeHelper(temp);
    }

int main ()
{
    string str = "A man, a plan, a canal: Panama";
    if(isPalindrome(str)){
        cout << "Palindrome " << "\n";
    }else{
        cout << "Not Palindrome " << "\n";
    }
    return 0;
}