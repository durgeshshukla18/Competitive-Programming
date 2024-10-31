#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = 0;
        int var = 0;
        while(abs(x) < n){
            var++;
            if(var % 2 != 0){
                x-=((2 * var) - 1);
            }else{
                x+=((2 * var) - 1);
            }
        }
        if(x < 0){
            cout<<"Kosuke"<<endl;
        }else{
            cout<<"Sakurako"<<endl;
        }
    }
}