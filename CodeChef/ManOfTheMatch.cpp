#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p=0,m=0;
        for(int j=1;j<=22;j++){
            int r,w;
            cin>>r>>w;
            int point= (r+(w*20));

            if(point>p){
                p=point;
                m=j;
            }
        }
        cout<<m<<endl;
    }
}
