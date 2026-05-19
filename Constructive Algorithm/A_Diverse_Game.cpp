#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t > 0) {

        int n , m;
        cin >> n >> m;

        int arr[n][m] , second[n][m];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        if(n == 1 && m == 1) {
            cout << -1 << "\n";
        } 
        else {

            if(n % 2 != 0 && m % 2 != 0) {
                int midR = n / 2, midC = m / 2;
                swap(arr[midR][midC], arr[midR][midC - 1]);
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    second[i][j] = arr[n - 1 - i][m - 1 - j];
                }
            }

            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << second[i][j] << " ";
                }
                cout << "\n";
            }
        }

        t--;
    }

    return 0;
}