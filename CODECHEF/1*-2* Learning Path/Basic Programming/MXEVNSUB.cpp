#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int count = 0;
	    count = (n/2) + (n%2);
	    if(count%2 == 0){
	        cout << n << endl;
	    }
	    else{
	        cout << n-1 << endl;
	    }
	}
	
	return 0;
}
