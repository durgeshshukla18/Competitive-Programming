#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        int b = a-1;
        int x = 2;
        while(x<a){
            if(a%x==0 && b%x==0){
                cout<<x<<endl;
                break;
            }
            // else{
            //     cout<<a-1<<endl;
            // }
            x++;
            b--;
        }
    }
}