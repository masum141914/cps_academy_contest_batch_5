#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int z;
        cin >> z ;
        int arr[26];
        for(int i = 0; i < 26; i++){
            arr[i] = 'a' + i ;
        }
        // for(int i = 0; i < 26; i++){
        //     cout << arr[i] << " " ;
        // }
        if(z < 28){
            int temp = z - 2 ;
            cout << "aa" << char(arr[temp] - 1) ;
        }else if( z > 27 && z < 53){
            cout << "a" << char(arr[z-28]) << "z" ;
        }else{
            cout << char(arr[z-53]) << "zz" ;
        }
        cout << "\n";
       t--;
    }

}