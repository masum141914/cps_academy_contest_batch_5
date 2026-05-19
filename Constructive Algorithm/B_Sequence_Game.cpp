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
        if(n == 1 ){
            cout << 1 << "\n" ;
            cout << arr[0] ;
        }else{
            int newarr[2 * n];
            int k = 0;
            newarr[k++] = arr[0];

            for(int i = 1; i < n; i++){
                if(arr[i] < arr[i-1]){
                    newarr[k++] = 1;
                }
                newarr[k++] = arr[i];
            }
            cout << k << "\n";
            for(int i = 0; i < k; i++){
                cout << newarr[i] << " ";
            }
        }
       t--;
       cout << "\n";
    }
}