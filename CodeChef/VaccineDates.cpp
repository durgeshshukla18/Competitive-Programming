#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int d,l,r;
	    cin>>d>>l>>r;
	    if(l<=d && d<=r){
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(d<l){
	        cout<<"Too Early"<<endl;
	    }
	    else if(d>r){
	        cout<<"Too Late"<<endl;
	    }
	}

}
