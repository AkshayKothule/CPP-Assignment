#include<iostream>

using namespace std ;

class Person{
    private :
    string name ;
    int age ;
    string city ;

    public :
   //getter and setter method 
    string getname(){
        return name ;
    }

    void setName(string name){
        this->name=name;
    }

    int getAge(){
        return age ;
    }

    void setage(int age){
        this->age=age;
    }
    string  getCity(){
        return city ;
    }

    void setCity(string city){
        this->city=city;
    }
 // default constructor 
    Person(){
        cout<<"--------this is Default constructor ----------"<<endl ;
        age = 10 ;
        city="NA";
        name="Akki";
    }


    //parametraized constructor 

    Person(string name ,int age , string city ){

        cout<<"--------parametraized constructor called -------"<<endl ;
        this-> name= name ;
        this->age=age;
        this->city= city ;
    }

    void display(){
        cout<<"\t \t ---------display person details "<<endl;

        cout<<"name ="<<name <<"age =" <<age <<"city =" <<city <<endl ;
    }
};
int main(){

    Person p1 ;
    // p1.setage(20);
    // p1.setCity("Mumbai");
    // p1.setName("Akshay");
    
    Person p2("Akki " , 22 , "Pune");
    p2.display();
    

    return 0;

}