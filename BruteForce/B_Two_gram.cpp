#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    string arr[t];
    string s ;
    cin >> s ;
    int maxCount  = 0 ;
    string maxpair = "" ;
    for(int i = 0; i < t - 1; i++){
        arr[i] = "";
        arr[i] += s[i];
        arr[i] += s[i+1];
    }
    for(int i = 0; i <  t - 1; i++){
        int count = 0 ;
        for(int j = 0; j < t - 1  ; j++){
            if(arr[i] == arr[j]){
                count++;
            }  
        }
        if(count > maxCount){
            maxCount=count;
            maxpair = arr[i] ;
        }
    }
    cout << maxpair ;
    cout << "\n" ;
}