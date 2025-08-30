#include<iostream>

using namespace std ;
class BankAccount{
    private :
    int  acct_no ;
    string customer_name ;
    double balance;
    public :
    BankAccount(int acct_no , string customer_name , double balance){
        this->acct_no=acct_no ;
        this->customer_name=customer_name;
        this->balance=balance;
    }
    void Withdraw(double amt){
         if(balance > amt){
            balance = balance -amt;
            cout<<"\t \t \t current balance :"<<balance<<endl;
         }else{
            cout<<"\t \t \t balance is Insufficent in acc"<<endl ;
         }
    }
    void Deposit(double amt){
        balance = balance +amt ;
        cout<<"\t \t \t after a deposit  balance is : "<<balance<<endl ;
    }
};
int main(){
    BankAccount B1(123 , "Akshay " , 800000);

    B1.Deposit(100000);
    B1.Withdraw(1000000);
    return 0;
}