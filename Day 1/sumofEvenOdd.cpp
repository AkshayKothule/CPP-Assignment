#include<iostream>

using namespace std ;
int sumOfevenodd(int n){
   int sumofeven=0 ;
   int sumofOdd=0 ;
   int totalsum;
    for(int i=0 ; i < n ;i++){

        if(i % 2==0){
            sumofeven= sumofeven + i ;
            
        }else {
            sumofOdd =sumofOdd + i ;
        
        }
         totalsum =sumofeven + sumofOdd ;

        cout<<totalsum<<endl;

    }

   
    return  totalsum ;

}
int main(){
    int num ;

    cout<<"Enter a Number :" <<endl ;
    cin >> num ;
    cout<<"sum of odd & Even :  ",sumOfevenodd(num);


}