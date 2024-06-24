//https://codeforces.com/problemset/problem/443/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    // cout<<s<<endl;
    int arr[26] = {0};
    //vector<int> arr(26, 0);
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] >= 97 && s[i] <= 122){
            arr[(s[i]) - 97]++;
        }
    }
    // for(int i = 1; i < s.length() - 1; i+=3){
    //     arr[(s[i]) - 97]++;
    // }
    // for(int k = 0; k < 26; k++){
    //     cout<<arr[k]<<" ";
    // }
    int count = 0;
    for(int j = 0; j < 26; j++){
        if(arr[j] > 0){
            count++;
        }
    }
    cout<<count;
}