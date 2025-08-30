#include<iostream>

using namespace std ;
class Teacher{
    private :
    string Tname;
    double salary;
    string lang ;
    
    public :
    Teacher(){
        cout<<"This default constructor "<<endl ;
    }

    Teacher(string Tname , double salary , string lang){
        cout<<"\t \t this is parameter constructor"<<endl ;
        this->Tname=Tname;
        this->salary=salary;
        this->lang=lang ;
    }
    void display(){
        cout<<"\t \t display the details of teacher "<<endl ;
        cout<<"Tname =" <<Tname <<endl ;
        cout<<"Salary =" <<salary<<endl ;
        cout<<"lang =" <<lang <<endl ;

    }



};

int main(){
    Teacher t1;
    t1.display();

    Teacher t2("xyz" , 480000 , "Java");
    t2.display();
    return 0;
}