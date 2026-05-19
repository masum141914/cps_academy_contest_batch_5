#include<bits/stdc++.h>
using namespace std;

bool isValid(char arr[], int len){
    int balance = 0;

    for(int i = 0; i < len; i++){
        if(arr[i] == '('){
            balance++;
        }else{
            balance--;
        }

        if(balance < 0){
            return false;
        }
    }

    return (balance == 0);
}

int main(){

    int t;
    cin >> t;
    while(t > 0){
        string s ;
        cin >> s ;
        int len = s.length() ;
        char arr1[len],arr2[len],arr3[len],arr4[len],arr5[len],arr6[len],arr7[len],arr8[len] ;
// 1
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr1[i] = '(';
            }else if(s[i]== 'B'){
                arr1[i] = '(';
            }else{
                arr1[i] = '(';
            }
        }

        // 2
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr2[i] = '(';
            }else if(s[i]== 'B'){
                arr2[i] = '(';
            }else{
                arr2[i] = ')';
            }
        }

        // 3
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr3[i] = '(';
            }else if(s[i]== 'B'){
                arr3[i] = ')';
            }else{
                arr3[i] = '(';
            }
        }

        // 4
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr4[i] = '(';
            }else if(s[i]== 'B'){
                arr4[i] = ')';
            }else{
                arr4[i] = ')';
            }
        }

        // 5
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr5[i] = ')';
            }else if(s[i]== 'B'){
                arr5[i] = '(';
            }else{
                arr5[i] = '(';
            }
        }

        // 6
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr6[i] = ')';
            }else if(s[i]== 'B'){
                arr6[i] = '(';
            }else{
                arr6[i] = ')';
            }
        }

        // 7
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr7[i] = ')';
            }else if(s[i]== 'B'){
                arr7[i] = ')';
            }else{
                arr7[i] = '(';
            }
        }

        // 8
        for(int i = 0; i < len; i++){
            if(s[i]=='A'){
                arr8[i] = ')';
            }else if(s[i]== 'B'){
                arr8[i] = ')';
            }else{
                arr8[i] = ')';
            }
        }
        bool checking = false ;
        if(isValid(arr1,len)){
            checking = true ;
        }
        if(isValid(arr2,len)){
            checking = true ;
        }
        if(isValid(arr3,len)){
            checking = true ;
        }
        if(isValid(arr4,len)){
            checking = true ;
        }
        if(isValid(arr5,len)){
            checking = true ;
        }
        if(isValid(arr6,len)){
            checking = true ;
        }
        if(isValid(arr7,len)){
            checking = true ;
        }
        if(isValid(arr8,len)){
            checking = true ;
        }
        if(checking){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }
        //cout << len ;
       // cout << arr1 ;
       t--;
       cout << "\n";
    }
}