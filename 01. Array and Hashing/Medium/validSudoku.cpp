#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool validSudoku(vector<vector<char>> &board){
    set<string>st;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j] != '.'){
                    string ro = to_string(i);
                    string co = to_string(j);
                    string tempBoard = to_string(board[i][j]);
                    string matrix = to_string((i/3)*3+(j/3));
                    string forRow = "Row"+ro+tempBoard;
                    string forCol = "Col"+co+tempBoard;
                    string forBox = "Box"+matrix+tempBoard;
                    if(st.find(forRow) == st.end()){
                        st.insert(forRow);
                    }else if(st.find(forCol) == st.end()){
                        st.insert(forCol);
                    }
                    else{
                        return false;
                    }
                    if(st.find(forBox) == st.end()){
                        st.insert(forBox);
                    }else{
                        return false;
                    }
                }
            }
        }
        return true;
}

int main ()
{
    return 0;
}