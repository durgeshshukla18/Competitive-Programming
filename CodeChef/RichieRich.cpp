#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	//int count=0;
	cin>>n;
	for(int i=0;i<n;i++){
	    int a,b,x;
	    cin>>a>>b>>x;
        if((b-a)>0){
            if(((b-a)%x)==0){
                cout<<((b-a)/x)<<endl;
            }else{
                cout<<((b-a)/x)+1<<endl;
            }
        }else{
            cout<<0;
        }
    }
}