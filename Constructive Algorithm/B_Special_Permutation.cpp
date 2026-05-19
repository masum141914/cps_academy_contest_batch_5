#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t > 0){

        int n , a, b ;
        cin >> n >> a >> b ;

        int left[n/2], right[n/2] ;
        bool used[105] = {false};

        int k = 1, l = 1 ;
        bool checkinvalid = false ;

        if((a <= n/2 && b <= n/2) || (a > n/2 && b > n/2)){
            checkinvalid = true ;
        }

        if(checkinvalid){
            cout << -1 ;
        }else{

            left[0] = a ;
            right[0] = b ;

            used[a] = true ;
            used[b] = true ;

            for(int i = n ; i >= 1; i--){

                if(!used[i] && i > a && k < n/2){

                    left[k] = i ;
                    used[i] = true ;
                    k++ ;
                }
            }

            for(int i = 1 ; i <= n ; i++){

                if(!used[i] && i < b && l < n/2){

                    right[l] = i ;
                    used[i] = true ;
                    l++ ;
                }
            }

            if(k != n/2 || l != n/2){
                cout << -1 ;
            }else{

                for(int i = 0; i < n/2; i++){
                    cout << left[i] << " ";
                }

                for(int i = 0; i < n/2; i++){
                    cout << right[i] << " ";
                }
            }
        }

        cout << "\n" ;
        t-- ;
    }
}