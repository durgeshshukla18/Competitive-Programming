#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sz = s.size();
    int arr[(sz/2)+1];
    // for(int i=0, j = 0;i<sz;i+=2, j++){
    //     arr[j]=(s[i] - '0');
    // }
    for(int i = 0, j = 0 ; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            arr[j] = s[i] - '0';
            j++;
        }
    }
    // int n = sizeof(arr) / sizeof(arr[0];
    int n = (sz/2)+1;
    sort(arr, arr+n);
    for(int i=0;i<(sz/2)+1;i++){
        if(i<(sz/2)){
            cout<<arr[i]<<'+';
        }else{
            cout<<arr[i];
        }
    }
    
    

}