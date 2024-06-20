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
        // for(int i = 0; i < n; i++)
        // {
        //     cout<<arr[i];
        // }

        // if(k == 1 && fav == arr[0] || fav < arr[k - 1])
        // {
        //     cout<<"NO"<<endl;
        // }
        // if(fav == arr[k-1] && fav != arr[k])
        // {
        //     cout<<"YES"<<endl;
        // }
        // if(k == 1)
        
        
        
        
        
        
        
        
        
        
        // {
        //     if()
        // 0.}0.
        // int index = 0;
        // int minimum_value_of_index = INT_MAX;
        // int maximum_value_of_index = INT_MIN;

        // for(int i= 0;i<n;i++)
        // {
        //     if(arr[i]==fav)
        //     {
        //         index= i;
        //         minimum_value_of_index=min(index,minimum_value_of_index);
        //         maximum_value_of_index=max(index,maximum_value_of_index);
        //     }
        // }

        // // cout<<maximum_value_of_index<<endl;
        // // cout<<minimum_value_of_index<<endl;
        

        // if(minimum_value_of_index<k && maximum_value_of_index>=k)
        // cout<<"MAYBE"<<endl;
        // else if(maximum_value_of_index<k)
        // cout<<"YES"<<endl;
        // else if(minimum_value_of_index>=k)
        // cout<<"NO"<<endl;

        






        // if(arr[k] == arr[k - 1])
        // {
        //     cout<<"MAYBE"<<endl;
        // }
        // else if(fav > arr[k - 1])
        // {
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }


    }
}