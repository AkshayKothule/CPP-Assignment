#include<iostream>

using namespace std ;
class ComplexNumber{
    private :
    int real;
    int imag ;
    public :
    ComplexNumber(int real , int imag){
        this->real=real;
        this->imag=imag ;
    }
    void display(){
        cout<<"\t real= "<<real <<"\n \t image="<<imag<<endl ;

    }
};
int main(){
    ComplexNumber N1(4 , 3 );
    N1.display();
    return 0;
}