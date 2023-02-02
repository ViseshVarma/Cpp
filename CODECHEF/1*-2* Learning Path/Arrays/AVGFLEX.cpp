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
	    sort(arr, arr+n);
	    int curr = 0;
	    for(int i=n/2; i>=0; i--){
	        if(arr[i] != arr[n/2]){
	            curr = i+1;
	            break;
	        }
	    }
	    cout << n - curr << endl;
	}
	return 0;
}
