#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n;
        int arr[501]={};
        int m=0 ;
        while (n>0){
            char a , b ,c ,d ;
            cin >> a>> b>> c>> d;
            //cout<< a << b << c << d << " ";
            if(a == '#'){
                arr[m] = 1;
            }else if(b == '#'){
                arr[m] = 2 ;
            }else if(c == '#'){
                arr[m] = 3 ;
            }else{
                arr[m]= 4 ;
            }
            m++;
            n--;
        }
        for(int i = m-1 ; i >= 0; i--){
            cout << arr[i] << " " ;
        }
       t--;
       cout << "\n";
    }
}