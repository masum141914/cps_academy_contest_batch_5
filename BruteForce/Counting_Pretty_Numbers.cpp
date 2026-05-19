#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t > 0){
        int m , n  ;
        cin >> m >> n ;
        //cout << m << n << "\n" ;
        int count = 0 ;
        for (int i = m; i <= n ; i++){
            if(i % 10 == 2){
                count++ ;
            }else if(i % 10 == 3){
                count++;
            }else if(i % 10 == 9){
                count++;
            }
        }
        cout << count << "\n" ;
        t--;
    }
}