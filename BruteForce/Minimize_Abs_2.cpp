#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin >> x;

    long long best = LLONG_MAX;
    int limit = (int)sqrt(x);

    long long squares[limit + 1];

    for (int i = 0; i <= limit; i++) {
        squares[i] = 1LL * i * i;
    }
    // for (int i = 0; i <= limit; i++) {
    //     cout << squares[i] << " " ;
    // }
    int left = 0 , right = limit ;
    while (left <= right){
        long long sum = squares[left] + squares[right];
        long long diff = llabs(x - sum);
        //cout << left << "--" << right << "--" <<diff << "--" << sum << " ";
        if (diff < best){
            best = diff;
        }
        if (sum < x){
            left++;
        }else{ 
            right--;
        }
    }
    cout << best << "\n";
    cout << "\n";
}