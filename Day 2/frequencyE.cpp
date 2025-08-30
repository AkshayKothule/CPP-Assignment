#include<iostream>

using namespace std ;

void displaycountelement(int arr[], int n) {
    bool visited[n];   // keep track of visited elements
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++) {
        if (visited[i])  // already counted this element
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;  // mark as visited
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}

int main(){

    int n ;

    cout<<"Please Enter a size of array " <<endl ;
    cin >>  n ;

    int arr[n];

    cout<<"Enter a element in array "<<endl ;

    for(int i=0 ;i< n ; i++){

        cin >> arr[i];
    }

    displaycountelement(arr, n);

    return 0;
}