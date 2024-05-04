//https://codeforces.com/problemset/problem/266/A

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int count=0;
    for(int i=1; i<n; i++){
        if(arr[i-1]==arr[i]){
            count++;
        }
    }
    cout<<count;
}