#include<iostream>

using namespace std ;

void swapElement(int * ptr , int &b){

    int temp=*ptr ;
    *ptr=b;
    b=temp ;
     cout<<"inside function ";
    // cout<<"Ptr ="<< &ptr << "b="<< &b <<endl ;

} 
int main(){

    int a=20 , b=30 ;

     cout<<"before the  swap" ;
    cout<<"a="<< a<< "b="<<b <<endl ;
   swapElement(&a , b);
   

   cout<<"After swap" ;

    cout<<"a="<< a<< "b="<<b <<endl ;
   
    
}