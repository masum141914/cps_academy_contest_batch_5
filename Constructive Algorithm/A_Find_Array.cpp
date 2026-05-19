#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int x ; 
        cin >> x ;
        for(int i = 0; i < x; i++){
            cout << i + 2  << " ";
        }
       t--;
       cout << "\n";
    }
}