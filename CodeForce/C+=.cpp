#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 0;
    while(t--){
        int a, b, n;
        cin>>a>>b>>n;
        while(a <= n && b <= n){
            count ++;
        // int maxi = max(a, b);
        // int mini = min(a, b);
            if(a > b){
                b += a;
            }else{
                a += b;
            }
            
        }
        cout<<count<<endl;

        // while(mini <= n){
        //     count++;
        //     mini += maxi;
        //     if(mini > maxi){
        //         maxi = mini;
                
        //     }
        // }
        // cout<<count<<endl;
    }
}