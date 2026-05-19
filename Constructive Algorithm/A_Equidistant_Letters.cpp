#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        string str ;
        cin >> str ;
        sort(str.begin(), str.end());
        cout << str ;
       t--;
       cout << "\n";
    }
}