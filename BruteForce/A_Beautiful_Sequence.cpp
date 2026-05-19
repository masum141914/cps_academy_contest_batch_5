#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n ;
    while(n > 0){
        int m ;
        cin >> m ;
        int arr[m + 1];
        for (int i = 1; i < m + 1; i++){
            cin >> arr[i] ;
        }
        bool matched = false ;
        for (int i = 1; i < m + 1; i++){
            if (arr[i] <= i){
                matched = true;
            }
        }
        if (matched){
           cout << "YES" << "\n" ;
        }else{
            cout << "NO" << "\n" ;
        }
        
       // cout << n << "\n" ;
        n--;
    }
}