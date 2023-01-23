#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int l = s.length();     //taking the length of the string and storing it in l.
	    string s1;
	    s1 = s.substr(0,l/2);       // taking two subsets to compare them.
	    string s2;
	    if(l%2 == 0){               // if the number is even we can divide into 2 subsets
	        s2 = s.substr(l/2,l+1);
	    }
	    else s2 = s.substr((l/2)+1,l);  // but if the number is odd we need to ignore the odd element in the middle
	    
	    sort(s1.begin(), s1.end());     // we sort the 2 strings in alphabetical order so that it will be easy to compare
	    sort(s2.begin(), s2.end());
	    
	    if(s1 == s2)    cout<<"YES"<<endl;  // as the strings are already sorted we just need to compare if they are equal
	    else    cout<<"NO"<<endl;

	}
	
	return 0;
}
