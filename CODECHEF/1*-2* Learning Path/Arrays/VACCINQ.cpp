#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, p, x, y, m = 0;
	    cin >> n >> p >> x >> y;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    
	    for(int i=0; i<p; i++){
	        if(arr[i]==0){
	            m += x;
	        }
	        if(arr[i]==1){
	            m += y;
	        }
	    }
	    cout<<m<<endl;
	}
	
	return 0;
}
