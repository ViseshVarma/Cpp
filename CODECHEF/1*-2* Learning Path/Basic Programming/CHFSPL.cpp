#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int arr[3];
	    for(int i=0; i<3; i++)
	    {
	        cin >> arr[i];
	    }
	    sort(arr, arr+3, greater<int>());
	    
	    int ans;
	    ans = arr[0] + arr[1];
	    cout << ans << endl;
	}
	
	return 0;
}
