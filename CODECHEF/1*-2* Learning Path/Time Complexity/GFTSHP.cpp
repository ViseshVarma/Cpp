#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int arr[n], ans = n, sum = 0;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    int count = 0;
	    for(int i=0; i<n; i++){
	        if(k >= arr[i]){
	            k = k - arr[i];
	            count ++;
	        }
	        else{
	            if(k >= (arr[i]+1)/2){
	                count++;
	                break;
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
