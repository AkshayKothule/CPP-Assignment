#include<iostream>

using namespace std ;

class Student{
   private :
    int rollNo ;
    double Marks1 ;
    double Marks2 ;
    double Marks3 ;
    
    int obtainMarks ;
    int percentage ;
    

    // int total , percentage , grade ;

    public :

    void accptinfo(){
        cout<<"Please enter a Roll No "<<endl ;
        cin >> rollNo;
   
    cout<<" \n \t \t -----out of 100 ------"<<endl  ;
    cout<<"Please enter a Marks1 "<<endl ;
    cin >> Marks1;
   
    cout<<"Please enter a Marks2  "<<endl ;
    cin >> Marks2;
    cout<<"Please enter a Marks3  "<<endl ;
    cin >> Marks3;

    }

    void Display(){

        cout<<"rollNo :"<<rollNo <<endl ;
        cout<<"Marks 1 :"<<Marks1 <<endl ;
        cout<<"marks 2 :"<<Marks2 <<endl ;
        cout<<"marks3 :"<<Marks3 <<endl ;




    }

    void totalF(){
         obtainMarks = Marks1 + Marks2 + Marks3 ;

        cout<<"obtains marks :"<<obtainMarks ;

    }
    void percentageF(){
         int total =300;
         
        // cout<<"Please enter total marks " ;
        // cin >> total ; 
        // cout<<obtainMarks <<endl ;
        percentage = 150 / total * 100 ;
        cout<<"Percentage  :"<<percentage;

    }



};

int main(){
    Student s1;
    s1.accptinfo();
    s1.Display();
    s1.totalF();
    s1.percentageF();




    return 0;
}