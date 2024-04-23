#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        if(i<t){
            if(i%2==1){
            cout<<"I hate that ";
            }
            if(i%2==0){
            cout<<"I love that ";
            }
        }
        if(i==t){
            if(i%2==1){
            cout<<"I hate it ";
            }
            if(i%2==0){
            cout<<"I love it ";
            }
        }
    }
}