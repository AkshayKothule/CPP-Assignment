#include<iostream>
#define PI 3.14
using namespace std ;

//when we write pure virtual function then must be implemented in child class 

class Shape{
    private :
    int a;

    public:
    Shape(){
        cout<<"\t \t \t -------Construter called -------"<<endl ;
    }

    Shape(int a){
        this->a=a;
    }
    virtual void area()=0;

    void display(){
        cout<<"\t \t \t This is display method "<<endl ;
        cout<<"a "<<a <<endl ;
    }
};
class Circle : public Shape{
    private :
    int x;

    public :
    Circle(int x , int a):Shape(a){
        this->x=x;
    }
  //this method override in parent class 
    void area(){
        int areacircle=PI * x * x;

        cout<<"area of circle ="<<areacircle<<endl ;
    }
};

class Reactangle : public Shape{
    private :
    int length ;
    int breath ;
    public :
    Reactangle(int length , int breath , int a) :Shape( a){
        this->length=length ;
        this->breath=breath ;

    }
    void area(){
        int areaReactangle = length * breath ;

        cout <<"Area of Reactangle ="<<areaReactangle<<endl ;
    }
};

int main(){
    Circle c1(4 , 3);
    c1.area();

    Reactangle r1(40 , 50  , 10);
    r1.area();

    
    return 0;
}