// https://codeforces.com/problemset/problem/344/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 1;
    int arr[t];
    for(int i = 0 ; i < t; i++){
        cin>>arr[i];
    }
    for(int i = 0 ; i < t; i++){
        if(i<t-1){
            if(arr[i]!=arr[i+1]){
                count++;
            }
        }
    }
    cout<<count;
}