#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int fav = arr[f - 1];
        int sz = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + sz, greater<int>());

        if(n == 1)
        {
            cout<<"YES"<<endl;
        }
        else if(fav >= arr[k - 1] && arr[k] > arr[k + 1])
        {
            cout<<"YES"<<endl;
        }
        else if(k == 1 && fav < arr[0]){
            cout<<"NO"<<endl;
        } 
        else if(arr[k] == arr[k - 1])
        {
            cout<<"MAYBE"<<endl;
        }
        else if(fav > arr[k - 1])
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}