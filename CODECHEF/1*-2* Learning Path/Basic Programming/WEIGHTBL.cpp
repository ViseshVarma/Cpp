#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int w1, w2, x1, x2, m;
	    cin >> w1 >> w2 >> x1 >> x2 >> m;
	    int increase = w2 - w1;
	    int min = x1 * m;
	    int max = x2 * m;
	    if(increase < min)  cout<<"0"<<endl;
	    else if(increase == min || increase == max) cout<<"1"<<endl;
	    else if(increase > min && increase < max) cout<<"1"<<endl;
	    else cout<<"0"<<endl;
	}
	
	return 0;
}
