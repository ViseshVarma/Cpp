#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int x, y;
	    cin >> x >> y;
	    while(n--){
	        char a[m];
	        int c=0, c1=0, c2=0;
	        for(int i=0; i<m; i++){
	            cin >> a[i];
	        }
	        for(int i=0; i<m; i++){
	            if(a[i] == 'F'){
	                c++;
	            }
	            else if (a[i] == 'P')   c1++;
	            else c2++;
	        }
	        if((c >= x) || (c==x-1 && c1 >= y)){
	            cout << 1;
	        }
	        else{
	            cout << 0;
	        }
	    }
	    cout << endl;
	}
	
	return 0;
}
