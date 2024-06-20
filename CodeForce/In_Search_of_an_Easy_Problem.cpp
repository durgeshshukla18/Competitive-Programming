// https://codeforces.com/problemset/problem/1030/A

#include<iostream>
using namespace std;
int main(){
    int s;
    cin>>s;
    int arr[s];
    int count = 0;
    for(int i = 0; i < s; i++)
    {
        cin>>arr[i];
        if(arr[i] == 1) count++;
    }
    if(count > 0) cout<<"HARD";
    else cout<<"EASY";
}