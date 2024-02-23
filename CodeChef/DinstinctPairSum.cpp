#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,r;
        int count=0;
        cin>>l>>r;
        for(int j=l;l<=r;j++){
            if((l+l)!=(l+l+1)){
                count++;
            }
        }
    }
}