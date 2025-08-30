#include<iostream>

using namespace std ;
int digitsum(int num){
    int rem , disum=0 ;

    while( num > 0){
        rem = num % 10 ;
        disum =disum + rem ;
        num=num/10 ;
    }
    return disum ;

}
int main(){
    int num ;
    cout <<"Please Enter a number :" <<endl ;
    cin>> num ;
    cout<<"sum of digit: "<<digitsum(num);

    return 0;
}