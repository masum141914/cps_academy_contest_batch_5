#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t >> n;
    
    int arr[t], original[t];

    for(int i = 0; i < t - 1; i++){     
        cin >> arr[i];
        original[i] = arr[i];      
    }

    int check ;

    for(int i = 0; i < 101; i++){ //start
        for(int j = 0; j < t; j++)   
            arr[j] = original[j];
        
        arr[t-1] = i;
        sort(arr, arr+t);
        int final_arr[t];
        copy(arr, arr+t, final_arr);
        int sum = 0 ;
        for(int z = 1 ; z < t - 1; z++){
            sum = sum+final_arr[z];
            //cout << final_arr[z] << " ";
        }
        //cout << sum << " "; 
        if(sum >= n){
            check = i ;
            break;
        }else{
            check = - 1  ;
        }
        cout << "\n";
    } //end loop1

    cout << check ;
    cout << "\n";
}