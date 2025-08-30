#include<iostream>

using namespace std ;
class Car{
    public :
    virtual void speed(){

        cout<<"this speed of base class"<<endl ;

    }
};
class  miniCar : public Car{
    public :
    void speed(){

        cout << "This is speed of mimi car "<<endl ;

    }

    void advanceF(){
        cout<<"This is Advance f in minicar "<<endl ;
    }
};
int main(){
    miniCar nano;

    //pointer  declear  parent and  address stored in child class 
    
    Car* c1=&nano;
     c1->speed();
      //downcasting 
    //  nano *obj= <nano*>(Car*);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    //  c1->advanceF();
    return 0;
}