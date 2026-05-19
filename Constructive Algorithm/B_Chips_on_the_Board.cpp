#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){

        int n;
        cin >> n;

        long long sum1 =0, sum2 = 0 ;

        int arr1[n] , arr2[n] ;

        for(int i = 0; i < n; i++){
            cin >> arr1[i] ;
        }

        for(int i = 0; i < n; i++){
            cin >> arr2[i] ;
        }

        int min1 = *min_element(arr1, arr1 + n);
        int min2 = *min_element(arr2, arr2 + n);

        if(n==1){
            cout << min1 + min2 ;
        }else{

            for(int i = 0; i < n; i++){
                sum1 = sum1 + (min1+arr2[i]) ;
            }
            for(int i = 0; i < n; i++){
                sum2 = sum2 + (min2+arr1  [i]) ;
            }

            if(sum1 < sum2){
                cout << sum1 ;
            }else{
                cout << sum2 ;
            }
        }
        t--;
       cout << "\n";
    }
}