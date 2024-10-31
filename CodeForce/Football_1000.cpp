#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string teamA, teamB;
    int countA, countB = 0;
    if(n == 1){
        cin>>teamA;
        cout<<teamA;
    }
    for(int i = 0; i < n; i++){
        string var = "";
        if(i == 0){
            cin>>teamA;
        }
        cin>>var;
        if(var == teamA){
            countA++;
        }
        else{
            teamB = var;
            countB++;
        }
    }
    if(countA > countB){
        cout<<teamA;
    }
    else{
        cout<<teamB;
    }
}