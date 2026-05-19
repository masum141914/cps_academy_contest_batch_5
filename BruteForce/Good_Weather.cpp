#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int a,b,c,d,e,f,g;
        cin >> a >> b>> c>> d >> e>> f >> g;
        int sum = a + b +c +d + e + f +g;
        if(sum >3){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
       t--;
       cout << "\n";
    }
}