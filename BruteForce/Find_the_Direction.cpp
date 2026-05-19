#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        if(n % 4 == 0){
            cout << "North";
        }
        if(n % 4 == 1){
            cout << "East";
        }
        if(n % 4 == 2){
            cout << "South";
        }
        if(n % 4 == 3){
            cout << "West";
        }
       t--;
       cout << "\n";
    }
}