//https://codeforces.com/problemset/problem/431/A

#include<iostream>
using namespace std;
int main(){
    int arr[4];
    for(int i = 0 ; i < 4 ; i++){
        cin>>arr[i];
    }
    string s;
    cin>>s;
    int sum = 0;
    for(int j = 0; j < s.length(); j++){
        sum += arr[(s[j] - '0') - 1];
    }
    cout<<sum;
}