#include<iostream> 

using namespace std ;

void netSalaryAccount(int basicSalary){
     int tax  ; 
     int netsalary ;

    if(basicSalary < 150000){
        netsalary=basicSalary;

        cout<<"No Tax "<<netsalary<<endl ;

    }else if(basicSalary > 150000 && basicSalary < 300000){

        tax= (basicSalary * 20) / 100 ;
        netsalary= basicSalary - tax ;

        cout<<"annual salary "<<netsalary ;

    }else if(basicSalary > 300000){
        tax= (basicSalary * 30 )/100;
         netsalary= basicSalary - tax ;
        cout<<"annual salary "<<netsalary ;
    }

}
int main(){

    int basicSalary ;
  
    cout<<"Please Enter a Deatils :"<<endl ;
    cin >> basicSalary ;
    netSalaryAccount(basicSalary);


    
}