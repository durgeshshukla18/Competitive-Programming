#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int count = 1;
    int temp = k;
    while(k <= n){
        if(k > n){
            cout<<k;
        }else{
            k += temp;
        }
    }
    cout<<k;
    // if(k > n) cout<<k;
    // while(true){
    //     // int m = 2;
    //     k += k;
    //     count++;
    //     // if(k <= n){
    //     //     k /= m;
    //     // }else{
    //     //     cout<<k;
    //     //     break;
    //     // }
    //     if(k > n){
    //         // cout<<k * count;
    //         break;
    //     }
    // }
    // // cout<<k;
    // cout<<k;
}