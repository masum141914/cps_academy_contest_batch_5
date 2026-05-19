#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt[24] = {0};

    for (int i = 0; i < n; i++) {
        int w, x;
        cin >> w >> x;
        cnt[x] += w;
    }

    int ans = 0;

    for (int i = 0; i < 24; i++) {
        int sum = 0;
        for (int j = 0; j < 9; j++) {
            sum += cnt[(i + j) % 24];
        }
        ans = max(ans, sum);
    }

    cout << ans <<"\n";
}