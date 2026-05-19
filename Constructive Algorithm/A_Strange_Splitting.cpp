#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        
        int arr[n] ;

        for(int i = 0; i < n; i++){
            cin >> arr[i] ;
        }

        bool flag = false;

        for(int i = 0; i < n - 1; i++){         
            if(arr[i] != arr[i + 1]){
                flag = true;
            }
        }
        if(!flag){
            cout << "NO" ;
        }else{
            cout << "YES" <<"\n"; 
            int temp = (n/2)  ;
            for(int i = 0; i < n; i++){
              if(i == temp){
                cout << "B" ;
              }else{
                cout << "R" ;
              }
            }
        }
       t--;
       cout << "\n";
    }
}