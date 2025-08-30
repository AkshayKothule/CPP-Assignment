#include<iostream>


using namespace std ;

class Book{
    private :
    int bookid ;
    string author_name ;
    double price ;

    public :
    Book(){
        cout<<"This No arguments constructor "<<endl ;
    }
    Book(int bookid , string author_name , double price){
        
        cout<<"This is Parametrized constructor "<<endl ;

        cout<<"Address of current obj : "<<this <<endl;
        this->bookid=bookid ;
        this->author_name=author_name;
        this->price=price;

    }
    void display(){
        cout<<"Display the details "<<endl ;

        cout<<"Book id :"<<bookid <<endl ;
        cout<<"Auther name :"<<author_name <<endl ;
        cout<<"Price of Book :"<<price <<endl ;
    }

};

int main(){

    // Book obj; 
    // obj.display();

    Book obj1( 4 , "habit" , 250.60); 
    cout<<"Address of an  object "<<&obj1  <<endl ;
    obj1.display();
    return 0;
}
