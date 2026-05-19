#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t > 0){
        string n;
        cin >> n;
        long long num = stoll(n);
        int temp = n.length() - 1;
        long long x = 1;

        for(int i = 0; i < temp; i++){
            x *= 10;
        }

        cout << num - x << "\n";

        t--;
    }
}