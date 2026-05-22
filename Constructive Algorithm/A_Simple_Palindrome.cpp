#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        string s = "aeiou" ;
        string p = "" ;
        int count = n / 5 ;
        int remain = n % 5 ;
        //cout << count << " " << remain ;
        if(count == 0){
            for(int i = 0; i < remain; i++){
                cout << s[i] ;
            }
        }else{
            while (count > 0){
                p += s ;
                count--;
            }

            for(int i = 0; i < remain; i++){
                p += s[i] ;
            }
            sort(p.begin(), p.end());
            cout << p ;
        }
       t--;
       cout << "\n";
    }
}