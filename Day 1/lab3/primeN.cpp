#include<iostream> 
#include <cmath>
using namespace std ;

bool Primecheck(int n){

    if( n <=1 ){
        return false;
    }

    for(int i=2 ; i <= sqrt(n) ; i++){

        if(n % i ==0){
            return false ;
        }

    }
    return true;


}
int main(){
     int n=20 ;
    for(int i=1 ; i<n ;i++){

        if(Primecheck(i)){
            cout<< i<<" ";
        }

    }



    
    return 0;
}