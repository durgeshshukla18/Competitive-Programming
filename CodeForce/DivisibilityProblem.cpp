#include<iostream>
using namespace std;
int main(){
    int t;
    int count = 0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        // int count = 0;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            a++;
            count++;
        }
    }
    cout<<count<<endl;
}