#include<iostream>

using namespace std ;
void searchElement(int arr[] ,int key){
    bool flag=false ;

    for(int i=0 ; i< 10 ;i++){

        if(arr[i]==key){
            
            flag=true;
            break ;
        }
    }

    if(flag){
        cout<<"Element is Found "<<endl;
    }else{
        cout<<"Element is Not found" <<endl ;
    }
  

}
int main(){
    int arr[10];
    int key ;
   cout<<"Please Enter a element :" <<endl ;

   for(int i=0 ; i < 10 ; i++){
    cin >> arr[i];
   }
   cout << "Please Enetr search element "<<endl ;
    cin >> key ;
    searchElement(arr , key);

    return 0 ;
}