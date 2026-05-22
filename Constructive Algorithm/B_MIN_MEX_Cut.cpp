#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zeroes = 0;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '0') {
                zeroes++;
            }
        }

        if (zeroes == 0) {
            cout << 0 << "\n";
            continue;
        }

        int first = -1;
        int last = -1;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '0') {
                if (first == -1) {
                    first = i;
                }
                last = i;
            }
        }

        if (last - first + 1 == zeroes) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }

    return 0;
}