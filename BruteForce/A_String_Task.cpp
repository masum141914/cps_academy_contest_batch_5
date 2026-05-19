#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        char temp = tolower((unsigned char)s[i]);

        if(temp != 'a' && temp != 'e' && temp != 'i' && temp != 'o' && temp != 'u' && temp != 'y' ){
            cout << '.' << temp;
        }
    }

    cout << "\n";
}