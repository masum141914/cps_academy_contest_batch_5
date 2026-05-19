#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        if(n % 2 == 0) {
            cout << -1 << '\n';
        } else {
            int k = 1, j = 0;
            for(int i = 0; i < n; i++) {
                if(i % 2 == 0) {
                    cout << n - j << " ";
                    j++;
                } else {
                    cout << k << " ";
                    k++;
                }
            }

            cout << '\n';
        }
    }
}