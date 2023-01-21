#include <iostream>
using namespace std;

signed main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;       // n = no.of cars.
	    int arr[n];     // this array contains the max speed of cars in the order they entered the long straight segment.
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }

	    int count=1;
	    for(int i=1; i<n; i++){
	        if(arr[i] <= arr[i-1]) count++;
	        else arr[i] = arr[i-1];
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}
