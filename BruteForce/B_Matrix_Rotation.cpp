#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t > 0){
       int arr[2][2];
       int arr1[2][2];
       int arr2[2][2];
       int arr3[2][2];
       bool check = false ;
       for(int i = 0; i < 2; i++){
           for(int j = 0; j < 2 ; j++){
               cin >> arr[i][j] ;
           }
       }

        // for(int i = 0; i < 2; i++){
        //    for(int j = 0; j < 2 ; j++){
        //        cout <<  arr[i][j] <<" ";
        //    }
        //    cout << "\n" ;
        // }

        arr1[0][0] = arr[1][0];
        arr1[0][1] = arr[0][0];
        arr1[1][0] = arr[1][1];
        arr1[1][1] = arr[0][1];

        // for(int i = 0; i < 2; i++){
        //    for(int j = 0; j < 2 ; j++){
        //        cout <<  arr1[i][j] <<" ";
        //    }
        //    cout << "\n" ;
        // }

       arr2[0][0] = arr1[1][0];
       arr2[0][1] = arr1[0][0];
       arr2[1][0] = arr1[1][1];
       arr2[1][1] = arr1[0][1];


        // for(int i = 0; i < 2; i++){
        //    for(int j = 0; j < 2 ; j++){
        //        cout <<  arr2[i][j] <<" ";
        //    }
        //    cout << "\n" ;
        // }

       arr3[0][0] = arr2[1][0];
       arr3[0][1] = arr2[0][0];
       arr3[1][0] = arr2[1][1];
       arr3[1][1] = arr2[0][1];


        // for(int i = 0; i < 2; i++){
        //    for(int j = 0; j < 2 ; j++){
        //        cout <<  arr3[i][j] <<" ";
        //    }
        //    cout << "\n" ;
        // }

        if((arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1]) && (arr[0][0] < arr[1][0] && arr[0][1] < arr[1][1])){
            check = true;
        }
        if((arr1[0][0] < arr1[0][1] && arr1[1][0] < arr1[1][1]) && (arr1[0][0] < arr1[1][0] && arr1[0][1] < arr1[1][1])){
            check = true;
        }
        if((arr2[0][0] < arr2[0][1] && arr2[1][0] < arr2[1][1]) && (arr2[0][0] < arr2[1][0] && arr2[0][1] < arr2[1][1])){
            check = true;
        }
        if((arr3[0][0] < arr3[0][1] && arr3[1][0] < arr3[1][1]) && (arr3[0][0] < arr3[1][0] && arr3[0][1] < arr3[1][1])){
            check = true;
}
        if(check){
            cout<< "YES";
        }else{
            cout << "NO" ;
        }
       t--;
       cout << "\n";
    }
}