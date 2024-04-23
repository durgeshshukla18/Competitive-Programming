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
        // int count=0;
        // int fcount=0;
        if(a==1){
            count++;
        }
        if(b==1){
            count++;
        }
        if(c==1){
            count++;
        }
        if(count>=2){
            fcount++;
        }
    }
        cout<<fcount;
}