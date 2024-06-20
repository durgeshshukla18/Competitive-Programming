#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int max_sum = 0;
        int temp_sum = 0;
        vector<int> v;
        for(int i = 2; i < num; i++){
            for(int j = 1; j < num; j++){
                if((i * j) <= num){
                    temp_sum += i * j;
                }

            }
            if(temp_sum > max_sum){
                max_sum = temp_sum;
                v.push_back(i);
            }
        }
        cout<<v.back()<<endl;
    }
}