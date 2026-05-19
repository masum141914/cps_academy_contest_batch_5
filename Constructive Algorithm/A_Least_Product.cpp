#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >>  n ;
        int arr[n] ;
        int negCount  = 0 ; 
        bool checkzero = false ;
        for(int i = 0; i < n; i++){
            cin >> arr[i] ;
            if(arr[i]<0){
                negCount++ ;
            }
            if(arr[i] == 0){
                checkzero = true ;
            }
        }
        if(checkzero){
            cout << "0" << "\n" ;
        }else{
            if(negCount % 2 != 0){
                cout << 0 << "\n" ;
            }else{
                cout << 1 << "\n" ;
                cout << 1 << " "<< 0 << "\n" ;
            }
        }
       t--;
    }
}