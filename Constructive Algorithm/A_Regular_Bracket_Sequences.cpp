#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int k = n; k >= 1; k--){
            for(int i = 0; i < k; i++){
                cout << '(';
            }
            for(int i = 0; i < k; i++){
                cout << ')';
            }
            for(int i = 0; i < n-k; i++){
                cout << '(';
            }
            for(int i = 0; i < n-k; i++){
                cout << ')';
            }
            cout << "\n";
        }
    }
}