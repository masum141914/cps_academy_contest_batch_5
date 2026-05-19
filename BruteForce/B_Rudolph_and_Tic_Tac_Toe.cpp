#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t > 0){
        char ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9 ;
        cin >>ch1>>ch2>>ch3>>ch4>>ch5>>ch6>>ch7>>ch8>>ch9 ;
        bool win = false ;
        char winner ;
        if(ch1 == ch2 && ch2 == ch3 && ch1 != '.'){
            win = true ;
            winner = ch1 ;
        }
        if(ch4 == ch5 && ch5 == ch6 && ch4 != '.'){
            win = true ;
            winner = ch4 ;
        }
        if(ch7 == ch8 && ch8 == ch9 && ch7 != '.'){
            win = true ;
            winner = ch7 ;
        }
        if(ch1 == ch4 && ch4 == ch7 && ch1 != '.'){
            win = true ;
            winner = ch1 ;
        }
        if(ch2 == ch5 && ch5 == ch8 && ch2 != '.'){
            win = true ;
            winner = ch2 ;
        }
        if(ch3 == ch6 && ch6 == ch9 && ch3 != '.'){
            win = true ;
            winner = ch3 ;
        }
        if(ch1 == ch5 && ch5 == ch9 && ch1 != '.'){
            win = true ;
            winner = ch1 ;
        }
        if(ch3 == ch5 && ch5 == ch7 && ch3 != '.'){
            win = true ;
            winner = ch3 ;
        }
        if(win){
            cout << winner ;
        }else{
            cout << "DRAW" ;
        }
       t--;
       cout << "\n";
    }
}