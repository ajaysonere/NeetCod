#include<iostream>
#include<vector>
using namespace std;

bool canPlacedFlower(vector<int> arr , int n){
    int count = 0;
    for(int i=0; i<arr.size(); i++){
        int count = 0;
        for(int i=0;i<arr.size(); i++){
            if(arr[i] == 0 && (i==0 || arr[i-1] == 0) && (i==arr.size()-1||arr[i+1] == 0)){
                count++;
                arr[i] = 1; 
                if(count >= n){
                    break;
                }
            }
        }
        return count>=n?true:false; 
    }
}

    int
    main()
{
    vector<int> flower = {1,0,0,0,1};
    int n = 1;
    if(canPlacedFlower(flower , n) == true){
        cout << "true" << "\n";
    }else{
        cout << "false" << "\n";
    }
    return 0;
}