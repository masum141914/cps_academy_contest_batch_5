#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int x , s , index ;
        cin >> x >> s ;
        string xs, ss ;
        bool checking = false ;
        cin >> xs >> ss ;
        string copyxs = xs ;
        for(int i = 1 ; i < 6; i++){
            xs += xs ;
           // cout << xs << " ";
            if(xs.find(ss) != string::npos){
                checking = true ;
                index = i ;
                break;
            }
        }
        if(copyxs.find(ss) != string::npos){
                cout << 0 ;
        }else if(checking){
            cout << index  ;
        }else{
            cout << -1 ;
        }
       t--;
       cout << "\n";
    }
}