//https://codeforces.com/problemset/problem/59/A

#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int sz = s.length();
    int count = 0;
    for(int i=0;i<sz;i++){
        if(s[i]<97){
            count++;
        }
    }
    for(int i=0;i<sz;i++){
        if(count>sz/2){
            if(s[i]>=97){
                s[i]-=32;
            }
        }
        if(count<=sz/2){
            if(s[i]<97){
                s[i]+=32;
            }
        }
    }
    cout<<s;
}