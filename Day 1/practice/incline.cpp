#include<iostream>
using namespace std ;

inline int maxvalue(int a , int b){

    return (a > b ) ? a : b ;

}

int main(){

    int a=10 , b=100 ;

    cout<<"max Value = " <<maxvalue( 10 , 100)<<endl ;



}