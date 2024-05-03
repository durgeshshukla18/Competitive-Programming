//https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int count=0;
    for(int i=0; i<n; i++){
        while(i<n-1){
            if(arr[i]==arr[i+1]){
                count++;
            }
        }
    
    }
    cout<<count;
}