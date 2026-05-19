#include<bits/stdc++.h>
using namespace std;

bool palindome(string m){
    string s = m ;
    string reverse(s.rbegin(),s.rend());
    //cout << reverse << " " ;
    if(s == reverse){
        return true ;
    }else{
        return false;
    }
}

int main(){

    string s;
    cin >> s;
    int len = s.length();

    string arr[5000];
    int k = 0;

    for(int i = 0; i < len; i++) {
        for(int j = i + 2; j <= len; j++) { 
            arr[k] = s.substr(i, j - i);
            k++;
        }
    }
    bool check = false ;
    int maxlen = 0,checklen ;
    for(int i = 0; i < k; i++){
        if(palindome(arr[i])){
            check = true ;
            checklen = arr[i].length() ;
        }
        if(checklen > maxlen){
            maxlen = checklen ;
        }
    }

    if(check){
        cout << maxlen ;
    }else{
        cout << 1 ;
    }
    cout << "\n";
}