//https://codeforces.com/problemset/problem/758/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    // int m = 0;
    for(int i = 0; i < n ; i ++){
        cin>>arr[i];
        // m = max(arr[i], m);
    }
    long long sum = 0;
    int s = sizeof(arr) / sizeof(arr[0]);
    int m = *max_element(arr, arr + s);
    for(int j = 0; j < n; j++){
        sum += (m - (arr[j]));
    }
    cout<<sum;
}