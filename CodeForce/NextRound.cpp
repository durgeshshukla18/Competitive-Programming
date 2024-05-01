//https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int numParticipant, finisherPlace;
    cin>>numParticipant>>finisherPlace;
    int count = 0;
    int arr[numParticipant];
    for(int i=0;i<numParticipant;i++){
        int contestant;
        cin>>contestant;
        arr[i]=contestant;
        //if(contestant>finisherPlace) count++;
    }
    for(int i=0;i<numParticipant;i++){
        
        if(arr[i]>=arr[finisherPlace-1]){
            if(arr[i]==0) count=count;
        }else{
            count++;
        }
    }
    cout<<count;
}