//https://codeforces.com/problemset/problem/443/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    //int arr[26] = {0};
    vector<int> arr(26, 0);
    for(int i = 1; i < s.length() - 1; i+=3){
        arr[(s[i]) - 97]++;
    }
    for(int k = 0; k < 26; k++){
        cout<<arr[k]<<" ";
    }
    int count = 0;
    for(int j = 0; j < 26; j++){
        if(arr[j] > 0){
            count++;
        }
    }
    cout<<count;
}