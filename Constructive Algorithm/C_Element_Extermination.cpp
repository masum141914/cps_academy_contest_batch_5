#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        long long n ;
        cin >> n ;
        long long arr[n] ;
        for(int i = 0; i < n; i++){
            cin >> arr[i] ;
        }
        if(arr[n-1] > arr[0]){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
       t--;
       cout << "\n";
    }
}