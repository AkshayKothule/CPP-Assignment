#include<iostream> 
#define PI 3.14
using namespace std ; 
void calcuateArea(){
    int choice;

    do{
        cout<<" \t 1.circle area \n \t 2.reactangle area \n \t 3.triagle area \n \t 4. exit \n  "<<endl ;

        cout<<"\t Please Enter a choice : " <<endl ;
        cin >> choice ;

        switch(choice){
            case 1 :
            int r ;
            double areaC ;
            cout<<"\t Please Enter a radius : "<<endl ;
            cin >> r ;
            areaC= PI * r * r ;

            cout<< "\t Area of circle "<<areaC <<endl ;
            break;
            case 2 :
              int len , br ;
              double areaR ;

              cout <<"\t Please Enter length & breath "<<endl ;
              cin >> len >> br ;

              areaR= len * br ;
              cout <<"\t area of Reactangle :"<< areaR;
              break ;
              case 3 :
              double areaT;
              int base , height ;
              cout<<"\t Please enter base and height "<<endl ;
              cin >> base >> height ;

              areaT= 0.5 * base * height ;
              cout<< " \t Area of Triangle :"<<areaT <<endl ;

              break ;

              case 4 :
              cout<<"Invaild choice "<<endl ;

              break ;
        


        }

    }while(choice != 4);

}
int main(){
    calcuateArea();

    
    return 0;
}