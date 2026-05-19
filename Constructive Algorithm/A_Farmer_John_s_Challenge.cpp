#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n , k ;
        cin >> n >> k ;
        if( n == k){
            for(int i = 0; i < n; i++){
                cout << 1 <<" ";
            }
        }else if(k > 1){
            cout << -1 ;
        }else{
            for(int i = 0; i < n; i++){
                cout << i + 1 <<" ";
            }
        }
       t--;
       cout << "\n";
    }
}