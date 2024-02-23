#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//space=x, no.mov.=n, s=spacereq, r=rating.
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,n;
	    cin>>n>>x;
		int max=0;
	    for(int j=0;j<n;j++){
	        int s,r;
	        cin>>s>>r;
	        // int max=0;
	        if(x>=s && max<=r){
				max=r;
	            //int max=0;
	            // if(max<=r){
	            //     max=r;
	            // }
	            // cout<<max<<endl;
	        }
	       // cout<<max<<endl;
	    }
		cout<<max<<endl;
	}

}
