//https://codeforces.com/problemset/problem/707/A

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin>>row>>col;
    char arr[row][col];
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y'){
                cout<<"#Color";
                break;
            }
            else{
                count++;
            }
        }
        if(count == row * col){
            cout<<"#Black&White";
        }
    }
}