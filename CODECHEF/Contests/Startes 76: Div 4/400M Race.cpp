#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double x, y, z;
	    cin >> x >> y >> z;
	    double a=0, b=0, c=0;
	    if(x!=y && x!=z){
	    a = 400/x;
	    b = 400/y;
	    c = 400/z;
	    if(a > b && a > c) cout<<"ALICE"<<endl;
	    else if(b > a && b > c) cout<<"BOB"<<endl;
	    else cout<<"CHARLIE"<<endl;
	    }
	}
	
	return 0;
}
