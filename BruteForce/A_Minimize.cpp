#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n ;
    while(n > 0){
        int m, l ;
        cin >> m >> l ;
        cout << abs(m-l) << "\n";
        n--;
    }
}