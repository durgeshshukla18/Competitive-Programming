#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n,k;
	    cin>>n>>k;
	    int count=0;
	    int r=n%k;
	    if(n<k || k==0){
	        cout<<n<<endl;
	    }else{
	        cout<<r<<endl;
	    }
// 	    while((n-k)>0){
// 	        count++;
// 	    }
// 	    cout<<count;
    }

}
