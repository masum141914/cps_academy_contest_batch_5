#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k, x;
        cin >> n >> k >> x;

        if(k > n || x < k-1){
            cout << -1 << "\n";
            continue;
        }

        long long sum = 0;

        for(int i = 0; i < k; i++){
            sum += i;
        }

        int rem = n - k;

        if(x == k){
            sum += rem * (k-1);
        }else{
            sum += rem * x;
        }

        cout << sum << "\n";
    }
}