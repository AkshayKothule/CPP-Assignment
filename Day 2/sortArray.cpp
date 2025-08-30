#include<iostream> 

using namespace std ;

void sortArray(int arr[]) {
    for(int i = 0; i < 15-1; i++) {
        for(int j = 0; j < 15-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[15] ;
    
    cout<<"Enter the element of array :"<<endl ;

    for(int i=0 ; i<15 ;i++){

        cin >> arr[i];
    }

    sortArray(arr);

    cout<<"disply the sorted element of arry : "<<endl ;

    for(int i=0 ; i <15 ;i++){
        cout<<arr[i]<<" ";
    }


    return 0 ;
}