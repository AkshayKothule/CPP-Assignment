#include<iostream> 
#define PI 3.14 
using namespace std ;
int areaCircle(int r){

    return PI * r * r ;

}
int main(){
    int r  ;

    cout<<"Please Enter a Redius of circle :"<<endl ;

    cin >> r ;
     cout<<"Area of Circle "<< areaCircle( r) ;


    return 0 ;

}