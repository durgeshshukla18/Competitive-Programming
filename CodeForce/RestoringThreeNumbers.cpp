// https://codeforces.com/problemset/problem/1154/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    long long arr[4] = {x1, x2, x3, x4};
    long long n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+4);
    
    // long long m = *max_element(arr, arr+4); 
    long long c = arr[3] - arr[0];
    long long a = arr[3] - arr[1];
    long long b = arr[3] - arr[2];
    cout<<a<<" "<<b<<" "<<c<<endl;
    
}