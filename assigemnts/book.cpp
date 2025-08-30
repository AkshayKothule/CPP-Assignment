#include<iostream>

using namespace std ;
class Book{
    private :
    int floor ;
    float price ;
    int pages ;

    public :
    Book(char floor  , float price , int pages ){
        this->floor=floor ;
        this->price=price ;
        this->pages=pages;
    }
    void display() ;

    


};

void Book ::  display(){
    cout<<"Display the Deatils :"<<endl ;
    cout<<this->floor <<endl ;
    cout<<this->price <<endl ;
    cout<<this->pages <<endl ;

}

int main(){

    Book obj(1 , 1200 , 3);
    obj.display();
    return 0;
}