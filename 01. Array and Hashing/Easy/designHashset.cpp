#include<iostream>
#include<vector>
using namespace std;

class MyHashSet {
public:
    vector<int>Hashset; 
    MyHashSet() {
       
    }
    
    void add(int key) {
        if(contains(key)){
           return ;
        }else{
           Hashset.push_back(key);
        }
    }
    
    void remove(int key) {
        int index = -1;
        for(int i=0; i<Hashset.size(); i++){
            if(Hashset[i] == key){
                index = i;
            }
        }
        if(index != -1){
            Hashset.erase(Hashset.begin()+index);
        }
    }
    
    bool contains(int key) {
        for(int i=0; i<Hashset.size(); i++){
            if(Hashset[i] == key){ 
                return true;
            }
        }
        return false;
    }
};

int main ()
{
    return 0;
}