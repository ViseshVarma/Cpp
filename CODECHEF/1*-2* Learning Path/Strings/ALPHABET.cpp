#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    string s1;
    while(cin >> s1){
        int count = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<s1.size(); j++)
            if(s[i] == s1[j])
            count++;
        }
        if(count == s1.size())
        cout << "Yes" << endl;
        else
        cout << "No" << endl;
    }
    return 0;
}