#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
       int a, b, c, d, e, f;
       cin >> a >> b >> c >> d >> e >> f;

       int kingx[8], kingy[8], queenx[8], queeny[8];

       int dx[] = { a,  a, -a, -a,  b,  b, -b, -b};
       int dy[] = { b, -b,  b, -b,  a, -a,  a, -a};

       // generate positions
       for(int i = 0; i < 8; i++){
           kingx[i] = c + dx[i];
           kingy[i] = d + dy[i];
           queenx[i] = e + dx[i];  
           queeny[i] = f + dy[i];
       }

       int x[8], y[8];   // store unique pairs
       int k = 0;

       // compare and insert uniquely
       for(int i = 0; i < 8; i++){
           for(int j = 0; j < 8; j++){
               if(kingx[i] == queenx[j] && kingy[i] == queeny[j]){

                   bool duplicate = false;

                   // check if already stored
                   for(int p = 0; p < k; p++){
                       if(x[p] == kingx[i] && y[p] == kingy[i]){
                           duplicate = true;
                           break;
                       }
                   }

                   // insert if not duplicate
                   if(!duplicate){
                       x[k] = kingx[i];
                       y[k] = kingy[i];
                       k++;
                   }
               }
           }
       }

       // output number of unique pairs
       cout << k << "\n";

       // optional: print pairs
       /*
       for(int i = 0; i < k; i++){
           cout << x[i] << " " << y[i] << " ";
       }
       cout << "\n";
       */
    }
}