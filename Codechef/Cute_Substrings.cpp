#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n ;
        char arr[n] ;
        for(int i = 0; i < n ; i++){
            cin >> arr[i] ;
        }

        int maxLen = 0 ;
        for(int i = 0 ; i < n; i++){
            int len = 0 ;
            int pos = i ;
            //cout << pos << "<<-- " ;
            while(pos < n){
                int localIdx = pos - i ;
                //cout << localIdx << " " ;
                //cout << pos << "<-- " ;
                if(localIdx % 2 == 0){
                    if(arr[pos] == 'u' || arr[pos] == 'o'){
                        len++ ;
                    }
                    else break ;
                }
                else if(localIdx % 2 != 0){
                    if(arr[pos] == 'w'){
                        len++ ;
                    }
                    else break ;
                }
                pos++ ;
                //cout << pos << "<<-- " ;
            }
           if(len % 2 != 0){
                maxLen = max(maxLen, len) ;
           }
        }
        cout << maxLen <<"\n" ;
        //cout << "\n" ;
        //cout << "\n" ;
        t--;
    }
}