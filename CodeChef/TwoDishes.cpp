#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(a>b){
            int x=a-b;
            if(b==n){
                cout<<"YES";
            }
        }
        else if(b>a){
            int x=b-a;
            if(x>c){
                int y=x-c;
                int z=a+c;
                if(z==n){
                    cout<<"YES";
                }
            }
            if(x<c){
                int y=c-x;
                int z=a+x;
                if(z==n){
                    cout<<"YES";
                }
            }
        }
        else{
            cout<<"NO";
        }
    }
}