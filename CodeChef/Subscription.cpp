#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,x;
	    cin>>n>>x;
	    if(n>6){
	        int d = n/6;
	        int r = n%6;
	        if(r>0){
	            d=d+1;
	        }
	        cout<<d*x<<endl;
	    }
	    else{
	        cout<<x<<endl;
	    }
	}

}
