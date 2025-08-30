#include<iostream>

using namespace std ;

class Student{
    private :
    int rollno ;
    string name;
    double marks ;

    public :
    Student(){
        cout<<"\t \t default called "<<endl ;
        rollno=1;
        name="Akshay";
        marks=50.00;
    }

    Student(int rollno , string name , double marks){

        cout<<"\t \t parametrized call -------"<<endl ;
        this->rollno=rollno;
        this->name=name;
        this->marks=marks;


    }

    //get and setter method 

    int getrollno(){
        return rollno;
    }

    void setrollno(int rollno){
        this->rollno=rollno;
    }
    void display(){
        cout<<"\t \t -----------display the student details--------"<<endl ;

        cout<<"rollno =" <<rollno <<endl;
        cout<<"name =" <<name <<endl;
        cout<<"marks =" <<marks <<endl;

    }

};
int main(){
    // Student s1;
    // s1.display();

    // Student s2(15 , "Bala" , 90.00);
    // s2.display();

    //i want create collection student 

    Student IACSD[5];

    Student s1(1 , "Amar" , 99.00);
    Student s2(2 , "Ramu" , 89.00);
    Student s3(3 , "Akshay" , 98.00);
    Student s4(4 , "Abhi" , 99.98) ;
    Student s5(5 , "Tushar" , 80.88);

    IACSD[0]=s1;
    IACSD[1]=s2; 
    IACSD[2]=s3;
    IACSD[3]=s4;
    IACSD[4]=s5;

    cout<<"\t \t -------display the student details here----- "<<endl ;

    for(int i=0 ; i<5 ;i++){
        IACSD[i].display();
    }

    
cout<<"\t \t ---display the all roll Number--- "<<endl ;

for(int i=0 ; i<5 ;i++){
    cout<<"rollno ="<<IACSD[i].getrollno()<<endl ;
}




    

    return 0;
}