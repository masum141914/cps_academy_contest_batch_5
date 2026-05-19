#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        long long sum = 0 ;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                sum += 3;
            }else{
                sum -= 1;
            }
        }
        cout << sum ;
       t--;
       cout << "\n";
    }
}