#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    string reversed(s.rbegin(), s.rend());
    return s == reversed;
}

bool palinDome(string str1, string str2) {
    string ab = str1 + str2;
    string ba = str2 + str1;
    return isPalindrome(ab) || isPalindrome(ba);
}

int main(){
    int t;
    cin >> t;
    string arr[t];
    for(int i = 0; i < t; i++){
        cin >> arr[i];
    }
    bool checking = false ;
    for (int i = 0; i < t; ++i) {
        for (int j = i + 1; j < t; ++j) {
            //cout << "(" << arr[i] << ", " << arr[j] << ") ";
            if(palinDome(arr[i], arr[j])){
               checking = true ;
               break;
            }
        }
    }
    if(checking){
        cout << "Yes" << "\n";
    }else{
        cout << "No" << "\n" ;
    }
}