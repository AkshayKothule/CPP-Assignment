#include<iostream>

using namespace std ; 

void oprationonArray(int arr[]){
    cout<<" \t \t Please Enter element in array "<<endl ;

    for(int i=0 ; i < 10 ;i++){
        cin >> arr[i];
    }
    int choice ;

    do{

        cout<<"1.sum \n . 2.average\n , 3. max and min \n 4 .exit \n  " <<endl ;
        cout<<"Please Enter a choice : "<<endl ;
        cin >> choice ;
         int sum=0 ;
         int avg=0;
        switch(choice){

            case 1 :
            
            for(int i=0 ;i<10 ;i++){

                sum += arr[i];
            }
            cout<<"Sum of array :" << sum <<endl ;
            break ;
        case 2 :
          for(int i=0 ;i<10 ;i++){

                sum += arr[i];
            }
            avg = sum / 10 ;
            cout<<" Avg of array :  " <<avg <<endl ;
            break ;

        case 3 :

        for(int i=0 ; i<9 ;i++){
            for(int j=0 ; j < 10-i-1 ;j++){

                if(arr[j] > arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp ;
                }
                
            }
        }

        cout<< "Sorted Array :" <<endl ;

        for(int i=0 ;i < 10 ;i++){
            cout<<arr[i]<<" " ;
        }

       

        cout<<"Max element in array :" << arr[9]<<endl ;

        cout<<"Min Element in array : "<<arr[0]<<endl ;
     
        
        break ;
         case 4 :
         cout<<"Invalid choice "<<endl ;
         break ;
        }

    }while(choice != 4);


}
int main(){

    int arr[10];
    oprationonArray(arr);



    return 0 ;

}