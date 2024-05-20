// https://codeforces.com/problemset/problem/1512/A

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for( int i = 0; i < t; i++){
        int s;
        cin>>s;
        int arr[s];
        for(int k = 0; k < s; k++){
            cin>>arr[k];
        }
        for( int j = 0; j < s-1; j++){
            if(arr[j] != arr[j+1])
            {
                if(j == 0)
                {
                    if(arr[0] != arr[1] && arr[1] != arr[2]){
                        cout<<2<<endl;
                    }else cout<<j+1<<endl;
                }else{
                    cout<<j+2<<endl;
                }
                break;
            }
        }
    }
}