#include<iostream>
#include<stack>
using namespace std;

bool isSubsquenceUsingStack(string s, string t){
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }
    for(int j=t.size()-1; j>=0; j--){
        if(st.top() == t[j]){
            st.pop();
        }
    }
    return st.empty();
}

int main ()
{
    string s = "abc";
    string t = "avdbdfc";
    if(isSubsquenceUsingStack(s,t)){
        cout << "It is subsquence " << "\n";
    }else{
        cout << "It is not subsquence " << "\n";
    }
    return 0;
}