#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int max,min;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        max = arr[0];
        min = arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i] > max)
                max = arr[i];
            if(arr[i]<min)
                min = arr[i];
        }
        cout<<(max - min)<<endl;
    }
}