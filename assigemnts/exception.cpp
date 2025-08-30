#include<iostream>

using namespace std ;

int main(){
    try{
        int choice ;
        cout<<"\t 1.int \n \t  2.char* ,\t 3.string \n\t  4.runtime_error  \n \t 5.exit "<<endl ;
        switch(choice){
            case 1 :
             throw 404 ;
            break ;

            case 2 :
            throw "C-style string exception !";
            break ;
            case 3 ;
            throw string("c++ string exception")
            break ;
            case 4 :
            throw runtime_error("standard runtime_error");
            break ;
            default :
            throw ;

        }


    }cathch(...){
        cout<<"this is error ocuurred "<<endl ;

    }
    return 0;
}