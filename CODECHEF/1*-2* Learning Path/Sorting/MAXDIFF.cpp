#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int w[n];
	    for(int i=0; i<n; i++){
	        cin >> w[i];
	    }
	    sort(w, w+n);
	    k = min(k, n-k);        // as chef wants him to carry min weight possible, we take the set which is less.
	    int son = 0;
	    int chef = 0;
	    int diff = 0;
	    for(int i=0; i<k; i++){
	        son = son + w[i];
	    }
	    for(int i=k; i<n; i++){
	        chef = chef + w[i];
	    }
	    diff = chef - son;
	    cout << diff << endl;
	}
	
	return 0;
}
