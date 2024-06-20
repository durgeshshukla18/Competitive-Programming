// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int n;
// 	    cin>>n;
// 	    int vl[n],st[n];
// 	    int max = 0;
// 	    for(int i = 0; i < n; i++)
// 	    {
// 	        cin>>vl[i]>>st[i];
// 	    }
// 	    for(int j = 0; j < n; j++)
// 	    {
// 	        for(int k = 1; k < n; k++)
// 	        {
// 	            int temp = (vl[j] * st[k]) + (st[j] * vl[k]);
// 	            if(max < temp)
// 	            {
// 	                max = temp;
// 	            }
// 	        }
// 	    }
// 	    cout<<max<<endl;
// 	}

// }




#include <bits/stdc++.h>
using namespace std;
// int setmini(int A[], int N)
// {
//     int mini = INT_MAX;
//     for (int i = 1; i < N; i++) {
//         if (A[i] < mini) {
//             mini = A[i];
//         }
//     }
//     return mini;
// }
// int setmaxi(int A[], int N)
// {
//     int maxi = INT_MIN;

//     for (int i = 1; i < N; i++) {
//         if (A[i] > maxi) {
//             maxi = A[i];
//         }
//     }
//     return maxi;
// }
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>arr[i];
	    }
	   // int n = sizeof(arr) / sizeof(arr[0]);
	   // int max = max_element(arr, arr+n);
	   // int min = min_element(arr, arr+n);
	   // int max = setmaxi(arr[], n);
	   // int min = setmini(arr[], n);
	   int min,max;
	    for(int l = 2; l < n; l++)
	    {
	        int min = arr[1];
	        int max = arr[1];
	        if(min < arr[l]){
	            min == arr[l];
	        }
	        if(max > arr[l]){
	            max = arr[l];
	        }
	    }
	    int ma,mi;
	    for(int j = 1; j < n; j ++)
	    {
	        if(max == arr[j]){
	            ma = j;
	        }
	        if(min == arr[j]){
	            mi == j;
	        }
	    }
	    if(max == k)
	    {
	        min--;
	        arr[mi] == min;
	    }
	    else{
	        min = k;
	        arr[mi] = max;
	    }
	    int sum = 0;
	    for(int k = 1; k < n; k++){
	        sum += abs(arr[k + 1] - arr[k]);
	    }
	    cout<<sum<<endl;
	}

}
