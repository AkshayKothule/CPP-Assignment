#include<iostream>

using namespace std ;

inline int areaSqure(int a){
    return a * a;

}

int main(){
    int num ;
    cout<<"Enter the squre side  :"<<endl ;

    cin >> num ;
    cout<<"Area of squre : "<<areaSqure(num)<<endl ;


    return 0;
}