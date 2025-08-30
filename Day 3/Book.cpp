#include<iostream>

using namespace std ;
class Book{
    private :
    string bName ;
    int bid ;
    string autherName ;
    double price ;
    public :

    string getBname(){
        return bName;
    }
    void setBname(string bName){
        this->bName=bName;
    }

     int getBid(){
        return bid;
    }
    void setBid(int bid){
        this->bid=bid;
    }

     string getBautherName(){
        return autherName;
    }
    void setBautherName(string autherName){
        this->autherName=autherName;
    }

    double getBprice(){
        return price;
    }
    void setBprice(double price){
        this->price=price;
    }

    Book(){
        cout<<"----------default constructor --------"<<endl ;

        bName="AB";
        bid=1 ;
        autherName="Akki";
        price=500.00;

    }

    //parameraized constructor 

    Book(string bName , int bid , string autherName , double price){
        cout<<"----parametraiized constructor "<<endl ;
        this->bName=bName;
        this->bid=bid;
        this->autherName=autherName;
        this->price=price;
    }


    void display(){
        cout<<"----------display the book details ----------"<<endl ;

        cout<<"bName=" <<bName <<endl ;
        cout<<"book id=" <<bid <<endl ;
        cout<<"auther name=" <<autherName <<endl ;
        cout<<"Price "<<price <<endl ;
    }
};
int main(){

    Book b1 ;
    // b1.setBid(10);
    // b1.setBautherName("Akshay");
    // b1.setBprice(1200.00);
    // b1.setBname("Babit") ;
    b1.display();
    Book b2("habit" , 14 , "Apj" , 6000.00);
    b2.display();
    return 0;
}