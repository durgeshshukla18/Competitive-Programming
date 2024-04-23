#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    if(t>=5){
        if(t==5){
        cout<<1<<endl;
        }else{
        int d = t/5;
        int m = t%5;
        if(m==0){
            cout<<d<<endl;
        }else{
            cout<<d+1<<endl;
        }
        // int o = d+1;
        // cout<<o<<endl;
        }
    }else{
        cout<<1<<endl;
    }
}