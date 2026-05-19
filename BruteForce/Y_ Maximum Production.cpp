#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int d , x, y , z ;
        cin >> d >> x>> y >> z ;
        int xworks = x * 7 ;
        int yzworks = (y*d)+z*(7-d);
        if(xworks > yzworks){
            cout << xworks ;
        }else{
            cout << yzworks ;
        }
       t--;
       cout << "\n";
    }
}