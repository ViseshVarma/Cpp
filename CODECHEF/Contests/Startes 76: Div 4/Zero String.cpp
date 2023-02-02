#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = count(s.begin(), s.end(), '1');
        int zero = count(s.begin(), s.end(), '0');
        
        cout << min(1+zero, one) << endl;
	    
	}
	
	return 0;
}
