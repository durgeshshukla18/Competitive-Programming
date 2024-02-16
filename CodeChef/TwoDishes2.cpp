#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,fr,veg,fi;
        cin>>n>>fr>>veg>>fi;
        if(veg>=n){
            if((fr+fi)>=n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}