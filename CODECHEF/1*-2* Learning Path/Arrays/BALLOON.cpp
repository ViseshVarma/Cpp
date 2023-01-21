#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0; i<n; i++){
	        cin >> a[i];
	    }
	    int count=0, count1=0;
	    for(int i=0; i<n; i++){
	        if(a[i]<=7){
	            count++;
	        }
	        else{
	            if(count<7 && a[i]>7){
	                count1++;
	            } 
	        }
	    }
	    if(count==7)
	    cout<<count + count1<<endl;
	}
	
	return 0;
}
