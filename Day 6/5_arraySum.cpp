#include<iostream>
// #include <bits/stdc++.h>
using namespace std ;
template <class T> 

T ArraySum(T arr[]){

    T sum =0 ;

    for(int i= 0 ; i < 10 ; i++){
        sum = sum + arr[i];
    }

    return sum ;




}
int main(){
    double arr[10];
    
    for(int i=0 ; i<10;i++){
        cin >> arr[i];
    }
    cout<<"array of sum :  "<<ArraySum(arr);

    return 0;
}