#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){

        int n ;
        cin >> n ;

        int arr[n] ;
        int count = 0 ;

        bool lastchecking = false ;

        for(int i = 0; i < n; i++){

            cin >> arr[i] ;

            if((i+1) != arr[i]){
                count++ ;
            }

        }

        if(arr[0] == n && arr[n-1] == 1){
            lastchecking = true ;
        }


        if(count == 0){

            cout << 0 ;

        }else if(count == 2){

            if(lastchecking){
                cout << 2 ;
            }else{
                cout << 1 ;
            }

        }else{
            cout << 2 ;
        }
       t--;
       cout << "\n";
    }
}