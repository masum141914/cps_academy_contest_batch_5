#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int m,n,k,count = 0;
        cin >> n >> m >> k ;
        int arrN[n], arrM[m],arrSum[m*n];
        for(int i = 0; i < n; i++){
            cin >> arrN[i] ;
        }
        // for(int i = 0; i < n; i++){
        //     cout << arrN[i] << " ";
        // }
        for(int i = 0; i < m; i++){
            cin >> arrM[i] ;
        }
    
        int s = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arrSum[s++] = arrN[i] + arrM[j];
            }
        }
        for(int i = 0; i < m*n; i++){
            if(arrSum[i] <= k){
                count++ ;
            }
        }
        cout << count ;
    t--;
       cout << "\n";
    }
}