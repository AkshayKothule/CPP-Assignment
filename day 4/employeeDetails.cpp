#include<iostream>

using namespace std ;

class Employee{
    private :
    int id ;
    string name ;
    double salary ;

    public :

    void accept(){
        cout<<"Enter a id "<<endl ;
        cin >> id ;

        cout<<"Enter Name "<<endl ;
        cin >> name ;

        cout<<"Enter a salary " <<endl ;
        cin >> salary ;

    }

    Employee(){

        cout<<"This is default constructor "<<endl ;
        id=2;
        name="Akki";
        salary=2000.00 ;


    }

    Employee(int id , string name , double salary)
    {
        cout<<"---this is parametrized constructor ----"<<endl ;
        this->id=id;
        this->name=name;
        this->salary=salary;

    }

    void display(){
        cout<<"---------display details ---------"<<endl ;

        cout<<"id =" <<id <<endl ;
        cout<<"name =" <<name <<endl ;
        cout<<"salary ="<<salary <<endl ;

  

    }
};
int main(){
    Employee e1;
    e1.accept();
    e1.display();
    return 0;
}