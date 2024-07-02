//https://codeforces.com/gym/532512/problem/D

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, n, s;
        cin>>a>>b>>n>>s;
        int var = n;
        int val = a * n;
        for(int i = 1 ; i <= a; i ++){
            if(n > s){
                break;
            }
            // while(n < s){
            n = var * i;
        // }
        }
        if(n == s){
            cout<<"YES"<<endl;
        }else if(n < s){
            if((n + b) >= s){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }


        // if(val == s || b == s){
        //     cout<<"YES"<<endl;
        // }
        // else if(val < s){
        //     if((val + b) >= s){
        //         cout<<"YES"<<endl;
        //     }else{
        //         cout<<"NO"<<endl;
        //     }
        
        // }
        // else if(val > s){
        //     if((s + b) >= val){
        //         cout<<"YES"<<endl;
        //     }else{
        //         cout<<"NO"<<endl;
        //     }
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

        // // s -= b;
        // // for(int i = 0; i < a; i++){
        // //     if(n < s){
        // //         if(n * a == s){
        // //             cout<<"YES"<<endl;
        // //             break;
        // //         }
        // //     }
        // // }
    }
}