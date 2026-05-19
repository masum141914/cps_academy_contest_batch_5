#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        string s ;
        cin >> s ;
        bool checkingzero = false ;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                checkingzero = true ;
            }
        }
        if(checkingzero){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
       t--;
       cout << "\n";
    }
}