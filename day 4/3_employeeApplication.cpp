#include<iostream>

using namespace std ;
class Employee{
    private :
    int Id ;
    string Name ;
    double Basic_salary ;
    double HRA;
    double Medical=1000 ;
    double PF;
    double PT;
    double Netsalary;
    double gross_salary ;

    public :
    Employee(int Id , string Name , double Basic_salary  ){
        this->Id=Id ;
        this->Name=Name ;
        this->Basic_salary=Basic_salary;
    }

    void display(){
        cout <<"\n \t \t \t display net salary and gross salary  "<<endl ;
        HRA= (50.0 / 100) * Basic_salary;
        cout<<"\t \t \t HRA=" <<HRA <<endl  ;
        gross_salary=Basic_salary +HRA +Medical ; 
        cout<<"\t \t \t Gross Salary = "<<gross_salary <<endl ;
        PF= (12.0 / 100) * Basic_salary;
        cout<<"\t \t \t PF ="<<PF<<endl ;
        PT=200;
        Netsalary=gross_salary -(PF+PT);

        cout<<"\t \t \t Net Salary =" <<Netsalary <<endl ;

    }
};
int main(){
    Employee E1(1 , "Akshay" , 45000.00);
    E1.display();
    return 0;
}