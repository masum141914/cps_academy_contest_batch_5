#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int x , y ;
        cin >> x >> y ;
        cout << "W" ;
        for(int j = 1; j < y; j++){
                cout << "B" ;
        }
        cout << "\n" ;
        for(int i = 1; i < x; i++){
            for(int j = 0; j < y; j++){
                cout << "B" ;
            }
        cout << "\n" ;
        }
       t--;
    }
}