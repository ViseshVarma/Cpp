#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	    }
	    int fuel=0;
	    int distance=0;
	    for(int i=0; i<n; i++){
	        fuel = fuel+arr[i];
	        if(fuel==0){
	            break;
	        }
	        fuel--;
	        distance++;
	    }
	    distance = distance+fuel;
	    cout << distance << endl;
	}
	
	return 0;
}
