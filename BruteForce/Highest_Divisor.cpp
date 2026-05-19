#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n ;
   int arr[11] = {} ;
//    cout << n ;
   for (int i = 1; i < 11; i++){
    // cout << arr[i] << " ";
    if ( n % i == 0){
        arr[i] = i ;
        // cout << i << "\n" ;
    }
   }
   cout << *max_element(arr, arr + 11); ;
   
}