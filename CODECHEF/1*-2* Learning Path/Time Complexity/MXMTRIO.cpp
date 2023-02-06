#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    long ans = (arr[n-1] - arr[0])* arr[n-2];
	    cout<<ans<<endl;
	}
	
	return 0;
}
