#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        char arr[3];
        for(int i = 0; i < 3; i++){
            cin >> arr[i] ;
        }
        if(arr[0] == 'a' | arr[1] == 'b' | arr[2] == 'c'){
            cout << "Yes" ;
        }else{
            cout << "No" ;
        }
       t--;
       cout << "\n";
    }
}