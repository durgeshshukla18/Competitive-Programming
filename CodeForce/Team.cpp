#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count=0;
    int fcount=0;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=2){
            count++;
        }
        // int count=0;
        // int fcount=0;
    }
    cout<<count;
}