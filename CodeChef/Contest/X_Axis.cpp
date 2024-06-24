//https://codeforces.com/contest/1986/problem/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1, x2, x3;
        int arr[3];
        cin>>x1>>x2>>x3;
        int min1 = (abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3));
        int min2 = (abs(x1 - x2) + abs(x2 - x2) + abs(x2 - x3));
        int min3 = (abs(x1 - x3) + abs(x3 - x2) + abs(x3 - x3));
        int mini1 = min(min1, min2);
        int mini2 = min(mini1, min3);

        cout<<mini2<<endl;

        // cout<<(abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3));


        // arr[0] = x1;
        // arr[1] = x2;
        // arr[2] = x3;
        // int min = 0;
        // for(int i = 0 ; i < 3; i++){
        //     int calc = 
        // }


        // if(x1 == x2 && x2 == x3){
        //     cout<<0<<endl;
        // }
        // else if(x1 == x2 && x2 != x3){
        //     cout<<abs(x2 - x3)<<endl;
        // }
        // else if(x1 != x2 && x1 == x3){
        //     cout<<abs(x1 - x2)<<endl;
        // }else if(x1 != x2 && x2 == x3){
        //     cout<<abs(x1 - x2)<<endl;
        // }
        // else if(x1 != x2 && x2 != x3){
        //     cout<<(abs(x1 - x2) + abs(x2 - x3))<<endl;
        // }
        
    }
}