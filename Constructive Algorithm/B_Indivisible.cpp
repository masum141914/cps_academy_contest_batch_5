#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        int arr[n] ;
        if(n == 1){
            cout << 1 ;
        }else if (n == 2 ){
            cout << 1 << " " << 2 ;
        }else if(n > 1 && n % 2 != 0){
            cout << -1 ;
        }else{
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    arr[i] = i + 2 ;
                }else{
                    arr[i] = i;
                }
            }
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
        }
       t--;
       cout << "\n";
    }
}