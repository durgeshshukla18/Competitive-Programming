#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float x=(s*c)/100;
	    float y=s+x;
	    if(a<=y && y<=b){
	        cout<<"Yes"<<endl;
	    }else{
	        cout<<"No"<<endl;
	    }
	}

}
