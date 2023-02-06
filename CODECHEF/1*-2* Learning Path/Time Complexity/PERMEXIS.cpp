#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    int count = 0;
	    sort(arr, arr+n);
	    for(int i=0; i<n; i++){
	        if(abs(arr[i+1]-arr[i]) <= 1)    count++;
	    }
	    if(count == n-1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	}
	
	return 0;
}
