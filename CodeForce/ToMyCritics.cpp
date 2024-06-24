//https://codeforces.com/problemset/problem/1850/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if((a + b) >= 10 || (a + c) >= 10 || (c + b) >= 10){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}