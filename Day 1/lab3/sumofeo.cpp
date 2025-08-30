#include<iostream>

using namespace std ;

void SumofEO(int n)
{
    int sumE=0;
    int sumO=0;
    for(int i=0 ; i<n ;i++){

        if(i % 2==0){
            sumE= sumE + i;

        }else{
            sumO = sumO +i ;

        }
    }
    cout<<"Sum even number :" <<sumE <<endl ;
    cout<<"Odd even number :" <<sumO <<endl ;
}
int main(){
   int n ;
    cout<<"Please Enter a number "<<endl;
    cin >> n;
    SumofEO(n);   
    return 0;
}

