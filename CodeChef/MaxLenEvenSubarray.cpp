#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int sum=(n*(n+1))/2;
	    if(sum%2==0){
	        cout<<n<<endl;
	    }else{
	        cout<<(n-1)<<endl;
	 }
	}

}
