#include<iostream>

using namespace std ;

inline int areaReactangle(int a , int b){
      int areaR= a * b ;
      return areaR ;

}
int main(){
    int len , breath ;

    cout<<"Enter length  of react :"<<endl ;
    cin >> len ;

    cout<<"Enter breath  of react :"<<endl ;
    cin >> breath ;
  cout<<"Area of Reactangle : " <<areaReactangle(len , breath);


    return 0;
}