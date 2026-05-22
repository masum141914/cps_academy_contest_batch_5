#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        
        if((i / 2) % 2 == 0)
            cout << 'a';
        else
            cout << 'b';
    }
}