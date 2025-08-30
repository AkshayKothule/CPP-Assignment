#include<iostream>


using namespace std ;

template <class T>

void swapTwo(T &a , T &b){
    T temp;
    temp=a;
    a=b;
    b=temp ;
}

int main(){
    int a=10 ,b=20 ;
    cout<<"before swap a = "<< a <<" b="<<b <<endl ;
    swapTwo(a , b );
    cout<<"After swap a= "<<a << "  "<<" b="<<b <<endl ;
    
    cout<<"\t \t double Data type "<<endl ;
    double c=20.0 , d=40.0;

   cout<<"before swap c = "<< c <<" c="<<d <<endl ;
    swapTwo(c , d);
   cout<<"After swap c = "<< c <<" c="<<d <<endl ;

 cout<<"\t \t this string data type "<<endl ;
   string name1="Akshay" , name2="Akki";

   cout<<"before swap name1 = "<< name1 <<" name2="<<name2 <<endl ;
    swapTwo(name1 , name2);
   cout<<"After swap name1 = "<< name1 <<" name2="<<name2 <<endl ;
    return 0;
}