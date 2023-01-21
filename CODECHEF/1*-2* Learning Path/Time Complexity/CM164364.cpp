#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x;
	    cin >> n >> x;
	    int arr[n];
	    int sabrina = n - x;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    sort(arr, arr+n);
	    int distinct = 0;
	    for(int i=0; i<n; i++){
	        if(arr[i]!=arr[i+1]){
	            distinct++;
	        }
	    }
	    if(distinct<=sabrina) cout<<distinct<<endl;
	    else if(distinct > sabrina) cout<<sabrina<<endl;
	    else cout<<1<<endl;
	}
	
	return 0;
}
