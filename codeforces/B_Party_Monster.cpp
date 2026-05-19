#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ,countopnen= 0 ,countclose= 0;
        cin >> n ;
        while (n > 0){
           char x ;
           cin >> x ;
           //cout << x <<" " ;
           if(x == '('){
            countopnen++;
           }else{
            countclose++;
           }
           n--;
        }
        if(countopnen == countclose){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
       t--;
       cout << "\n";
    }
}