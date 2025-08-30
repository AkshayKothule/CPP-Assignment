#include<iostream>

using namespace std ;
template<class T>
class Calculator{
    private :
    T a  ;
    T b ;

    public :
    Calculator(T  a , T b){
        this-> a= a;
        this-> b= b;
    }
    void add(T a , T b){
        T c= a + b;

        cout<<"Sum of two No : "<< c <<endl ;
    }

    void Subtract(){
        T c = a- b ;

        cout<<" Substraction two number is :"<<c <<endl ;
    }

    void Multiply(){
        T c= a * b;
        cout<<"Multication :"<< c <<endl ;
    }

    void divide(){
        T c= a / b ;

        cout<<"Division of two number is :"<< c <<endl ;
    }

};
int main(){
    int num1 , num2 ;
    Calculator <int> obj1( num1 , num2 );
    
    
    cout<<"Please Enter a num1 & num2 "<<endl ;

    cin >> num1 >> num2 ;

    obj1.add(num1 , num2 );
    // obj1.Subtract();
    // obj1.Multiply();
    // obj1.divide();

    // Calculator <int> obj2( 500.00 , 400.00 );
    // obj2.add();
    // obj2.Subtract();
    // obj2.Multiply();
    // obj2.divide();

    return 0;
}