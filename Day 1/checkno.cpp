#include<iostream>

using namespace std ;

// check even and oadd numbers 
void checkevenOdd(int num)
{
    if(num %2 == 0){
        cout<<"Number is Even :" <<num <<endl;
    }else {
        cout<<"Number is odd : "<<num <<endl; 
    }

}

// check the number is divisible by 5 and 7 

void checkDivisibility(int num){

    if(num % 5==0 && num % 7 == 0){
        cout<<"Number is divisble by 5 And 7 "<<endl ;
    }else{
        cout<<"Number is Not divisble by 5 and 7 "<<endl ;
    }

}

int main(){
    int num1 ;

    cout<<"please Enter a Number :" ;
    cin >> num1 ;
    checkevenOdd(num1);
    checkDivisibility(num1);



    
}