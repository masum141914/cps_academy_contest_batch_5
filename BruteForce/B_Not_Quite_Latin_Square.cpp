#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n = 3;
        while(n > 0){
            char a , b , c ;
            cin>> a >> b >> c ;
            if(a =='?'){
                int remain = int(b) + int (c);
                int missing = 198 - remain ;
                cout << char(missing);
                cout << "\n" ;
            }
            
            if(b =='?'){
                int remain = int(a) + int (c);
                int missing = 198 - remain ;
                cout << char(missing);
                cout << "\n" ;
            }
            if(c =='?'){
                int remain = int(b) + int (a);
                int missing = 198 - remain ;
                cout << char(missing);
                cout << "\n" ;
            }
            n--;
        }
       t--;
    }
    


}