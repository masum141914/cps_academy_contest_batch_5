#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n , k ;
        cin >> n >> k ;
        int arr[n] ;
        for(int i = 0; i < n; i++){
            arr[i] = i+1 ;
        }
        if(k == 0){
            for(int i = (n-1); i >= 0; i--){
                cout << arr[i]  <<" ";
            }
        }else if(k == (n-1)){
            for(int i = 0; i < n; i++){
                cout << arr[i]  <<" ";
            }
        }else{
            int temp = k + 1 ;
            int limit = n - temp ;
            for(int i = limit ; i >= 0; i--){
                cout << arr[i] << " ";
            }
            for(int i = limit + 1; i < n; i++){
                cout << arr[i] << " ";
            }
        }
       t--;
       cout << "\n";
    }
}