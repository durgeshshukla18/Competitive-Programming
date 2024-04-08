#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        int d = n/2;
        int r = n%2;
        if(r==0){
            if((a*n)<(b*d)){
                cout<<a*n<<endl;
            }else{
                cout<<b*d<<endl;
            }
        }
        if(r==1){
            if((a*n)<((b*d)+(a*r))){
                cout<<a*n<<endl;
            }else{
                cout<<(b*d)+(a*r)<<endl;
            }
        }
    }
}