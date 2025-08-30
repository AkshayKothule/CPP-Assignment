#include<iostream>

using namespace std ;

void  countevenodd(int arr[]){
    int countE= 0;
    int countO=0 ;
    for(int i=0 ; i<10 ;i++){

        if(arr[i] % 2==0){
            countE++;


        }else{
            countO++;

        }
    }
    cout <<"even number count : "<< countE <<endl ;
    cout <<"even number count : "<< countO <<endl ;

}

int main(){

    int arr[10];

    cout<<"Enter a Array Element : "<<endl ;

    for(int i=0 ; i<10 ;i++){
        cin >>arr[i];
    }

    countevenodd(arr);

    


    return 0;
}