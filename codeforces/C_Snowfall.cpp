#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
        int n ;
        cin >> n ;
        int arr[n],arr2[n];
        int left = 0;
        int right = n - 1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] % 2){  
                arr2[left] = arr[i];
                left++;
            }else{         
                arr2[right] = arr[i];
                right--;
            }
        }
        for(int i = n-1; i >= 0; i--){
            cout << arr2[i] << " ";
        }
       t--;
       cout << "\n";
    }
}