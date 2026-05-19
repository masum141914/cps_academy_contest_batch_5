#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        long long x ;
        long long y ;
        long long n ;
        long long z ;
        cin >> x ;
        cin >> n ;
        y = x ;
        z = y ;
        long long total = 0 ;
        while (x > 0) {
            total += x % 10; 
            x /= 10;  
        }
        if(total % n == 0){
            cout << y << "\n" ;
        }else{
        // cout << total << " " ;
            int arr[200], arr2[200] ;
            for(int i = 0; i < 200; i++){
                arr[i] = y++ ;
            }
            for(int i = 0; i < 200; i++){
                arr2[i] = z++ ;
            }
            // for(int i = 0; i < 20; i++){
            //    cout<< arr[i] << " ";
            // }
            for(int i = 0; i < 200; i++){
                int total2 = 0;
                while (arr[i] > 0) {
                total2 += arr[i] % 10; 
                //cout << total2 << " ";
                arr[i] /= 10;
                }
                if (total2 % n == 0){
                    cout << arr2[i] << "\n";
                    break;
                }
                //cout << arr2[i] << " ";
             }
            //cout << final << "\n";
        }
        t--;
    }
}