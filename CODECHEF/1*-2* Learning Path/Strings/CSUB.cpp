#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int a;
	    cin >> a;
	    long long p=0, q=0;
	    string s;
	    cin >> s;
	    for(int i=0; i<a; i++){
	        if(s[i] == '1'){++p;}
	        else if(s[i] == '0') {++q;}
	    }
	    int k=a*(a+1)/2;
	    cout << p*(p+1)/2 << endl;
	}
	
	return 0;
}
