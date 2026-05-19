#include<bits/stdc++.h>
using namespace std;

int diffDigit(string a, string b){
    int changes = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            changes++;
        }
    }
    return changes;
}


int main(){

    int t;
    cin >> t;
    while(t > 0){
        int x ;
        cin >> x ;
        if(x % 7 == 0){
            cout << x << "\n" ; //if div possible then cout
        }else{
             // need comparision of digit changes I can do two closest number, then which one has minimum digitchange
            int temp = x / 7 ;
            int inc = temp + 1 ;
            int num1 = temp * 7 ;
            int num2 = inc * 7 ;
            //cout << num1 << " " << num2 ;
            string num11 = to_string(num1);
            string num22 = to_string(num2);
            string numxx = to_string(x);
            int change1 = diffDigit(numxx,num11);
            int change2 = diffDigit(numxx,num22);
            int final = min(change1,change2) ;
            //cout << final << "\n" ;
            if(final==change1){
                cout << num1 << "\n";
            }else{
                cout << num2 << "\n";
            }
        }
        //cout  << "\n" ;
       t--;
    }
}