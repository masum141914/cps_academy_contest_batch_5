#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        cout << n << " " ;
        for(int i = 1; i < n; i++){
            cout << i  << " " ;
        }
       t--;
       cout << "\n";
    }
}