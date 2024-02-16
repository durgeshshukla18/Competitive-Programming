#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int w1,w2,x1,x2,M;
	    cin>>w1>>w2>>x1>>x2>>M;
	    if((x1*M) <= (w2-w1) && (w2-w1) <= (x2*M)){
	        cout<<1<<endl;
	    }else{
	        cout<<0<<endl;
	    }
	}

}
