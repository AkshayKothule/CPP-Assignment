#include<iostream>
using namespace std ;

int main(){
    int a ,  b ;
   cout<<"Please Enter the value of number  : "<<endl;
   cin >>a >> b ;

   cout<<"Before the swap no are :  " <<endl ;
   cout<<"a ="<<a << " " << " b="<< b <<endl;

   int temp = a;
   a= b; 
   b= temp ;

   cout<<"After the swap number are :"<<endl ;
   cout<<"a ="<<a << " " << " b="<< b <<endl;
    
}