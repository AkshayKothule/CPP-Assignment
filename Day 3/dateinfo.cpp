#include<iostream>

using namespace std ;
class Date{
    private :
    int day ;
    int month ;
    long year ;

    public :
    int getday(){
        return day;
    }
    void setDay(int day){
        this->day=day ;

    }
     int getMonth(){
        return month;
    }
    void setMonth(int month){
        this->month=month ;

    }
     int getYear(){
        return year;
    }
    void setYear(long year){
        this->year=year ;

    }

    //default constructor 

    Date(){

        cout<<"-----------Default constructor call----------- "<<endl ;
        day=1 ;
        month=1 ;
        year=2000;
    }

    //parametraized constructor 
 Date(int day , int month , long year){

    cout<<"-----------parmetarized constrcutor called------"<<endl;
    this->day=day ;
    this->month=month ;
    this->year=year;

 }
    void display(){
        cout<<"Display the date :"<<endl ;

        cout<<day<<"-"<<month<<"-"<<year<<endl ;

    }
};
int main(){
    Date d1;
    // d1.setDay(12);
    // d1.setMonth(5);
    // d1.setYear(2024);
    d1.display();

    Date d2(14 , 10 , 2025);
    d2.display();
    return 0;
}