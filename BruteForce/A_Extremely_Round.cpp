#include<bits/stdc++.h>
using namespace std;

bool digitCount(int n) {
    int count = 0;

    while (n > 0) {
        if (n % 10 != 0) {
            count++;
        }
        n /= 10;
    }

    if (count == 1) {
        return true;
    } else {
        return false;
    }
}

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n,count=0;
        cin >> n ;
        int arr[54]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000, 200000, 300000, 400000, 500000, 600000, 700000, 800000, 900000};
        for(int i = 0; i < 54; i++){
            if(n >= arr[i]){
                count++;
            }
        }
        cout << count ;
       t--;
       cout << "\n";
    }
}