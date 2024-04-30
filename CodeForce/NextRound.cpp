#include<bits/stdc++.h>
using namespace std;
int main(){
    int numParticipant, finisherScore;
    cin>>numParticipant>>finisherScore;
    int count = 0;
    for(int i=0;i<numParticipant;i++){
        int contestant;
        cin>>contestant;
        if(contestant>=finisherScore) count++;
    }
    cout<<count<<endl;
}