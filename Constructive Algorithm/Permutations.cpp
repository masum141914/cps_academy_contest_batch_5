#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    if(n <= 3 && n > 1){
        cout << "NO SOLUTION" << "\n" ;
    }else if(n == 1 ){
        cout << 1 << "\n" ;
    }else {
        for(int i = 1; i <= n; i++){
            if(i % 2 == 0){
                cout << i << " ";
            }
        }
        for(int i = 1; i <= n; i++){
            if(i % 2 != 0){
                cout << i << " ";
            }
        }
    }
    cout << "\n" ;
}