#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        int arr[n] , staticArr[n] ;
        for(int i = 0; i < n; i++){
            staticArr[i] = i + 1 ;
        }
        for(int i = 0; i < n; i++){
            cin >> arr[i] ;
        }
        for(int i = 0; i < n; i++){
            cout << staticArr[n-arr[i]] << " ";
        }
       t--;
       cout << "\n";
    }
}