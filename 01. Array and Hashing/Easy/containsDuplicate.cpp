#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool containsDuplicate(vector<int>vec){
    unordered_set<int> st(vec.begin() , vec.end());
    return st.size()!= vec.size();
}

int main ()
{
    vector<int> vec = {10,20,30,40,50 , 50};
    if(containsDuplicate(vec)){
        cout<< "Duplicate Present " << "\n";
    }else{
        cout << "Duplicate not Present " << "\n";
    }
    return 0;
}