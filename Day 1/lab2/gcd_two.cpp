#include<iostream>

using namespace std ;
 
int GCDTwo(int num1 , int num2){

    int gcd=1 ;

    for(int i=0 ; i<=num1 || i <= num2 ; i++){

        if(num1 % i==0 && num2 % i==0){
            gcd=i;
        }
    }

    return gcd ;


}

int main(){
    int num1 , num2 ;
    
    cout<<"Please Enter num1 and num2 "<<endl ;
    cin >> num1 >> num2 ;



    cout<<"GCD of two number :" << GCDTwo( num1 , num2 );
    return 0;
}