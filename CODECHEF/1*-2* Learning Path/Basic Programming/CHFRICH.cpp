#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, x, years = 0;
	    cin >> a >> b >> x;
	    years = (b-a)/x;
	    cout << years << endl;
	}
	
	return 0;
}
