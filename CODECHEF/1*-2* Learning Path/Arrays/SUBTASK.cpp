#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, m, k;    //n= no of test cases, m= first testcases(m<n), k = no of points.
	    cin >> n >> m >> k;
	    int arr[n];
	    int count=0;
	    int count1=0;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];          //if a[i] = 1 he passed, if a[i] = 0 he failed.
	    }
	    for(int i=0; i<n; i++){     //if all testcases are passed print 100;
	        if(arr[i] == 1){
	            count++;
	        }
	    }
	    
	    for(int i=0; i<m; i++){         //if m testcases are passed print k
	        if(arr[i]==1){ 
	            count1++;
	        }
	    }
	    if(count == n) cout<<100<<endl;
	    else if(count1 == m) cout<<k<<endl;
	    else cout<<0<<endl;
	    
	}
	return 0;
}
