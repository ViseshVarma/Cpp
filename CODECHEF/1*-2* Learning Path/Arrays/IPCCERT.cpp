#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, m, k, count=0;
	cin >> n >> m >> k;
	while(n--){
	    int sum = 0;
	    int arr[k];
	    for(int i=0; i<=k; i++){
	        cin >> arr[i];
	    }
	    for(int i=0; i<k; i++){
	        sum += arr[i];
	    }
	    
	    if(sum >= m && arr[k] <= 10){
	       count++;
	   }
	}
	cout<<count<<endl;
	
	return 0;
}
