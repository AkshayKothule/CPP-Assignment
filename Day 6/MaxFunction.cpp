#include <iostream> 

using namespace std ;
template < class A>
 
int  MaxElement(A a , A b){

    if(a > b ){
        return a;
    }else{
        return b;
    }

}

int main(){
    int a = 200 , b=100 ;
    int maxE=MaxElement(a , b);
    cout <<"Max element int datatype :"<<maxE<<endl ;

    double c = 20.00 , d=10.00 ;
    double maxD=MaxElement(c , d);
    cout <<"Max element in double datatype  :"<<maxD<<endl ;

    return 0;
}