#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    long long n, k;
	    cin >> n >> k;
	    vector<long long> a(n);
	    long long sum = 0;
	    
	    for(int i=0; i<n; i++)
	    {
	        cin >> a[i];
	        sum += a[i];
	    }
	    cout << sum % k << endl;
	    
	}
	
	return 0;
}
