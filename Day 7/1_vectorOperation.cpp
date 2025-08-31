#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;
// 1:Create an application for storing int values in vector.
//   Create menu drivin app for following menu;
//   1:add 2:show all 3:search 4:sort 5:reverse 6:clear
int main(){
    vector<int> v1 ;
    int ch;
    int num ;
    do{
        cout<<"\n 1.add \n 2.show all \n 3.search \n 4.sort 5.revrese \n 6.clear \n ";

        cout<<"Please enter a choice "<<endl ;
        cin >> ch ;
        switch(ch){
            case 1 :
            cout<<"\n Enter a element in vector "<<endl ;
            cin >> num ;
            v1.push_back(num);
            break ;
            case 2 :
            cout<<"\n display the vactor Element :"<<endl ;

            for(int i : v1){
                cout<< i << " ";
            }
            break ;
            case 3 :
            cout<<"enter element To search "<<endl ;
            int key ;
            cin >> key ;

            for(int i : v1 ){
                if(i==key){
                    cout<<"\n Element is present in vactor is : "<<i <<endl ;
                }
            }
            break ;
            case 4 :
            cout<<"Sorted vector successfuly  "<<endl ;
            sort(v1.begin() , v1.end());
            break ;
            case 5:
            cout<<"Reverse the vector "<<endl ;

            reverse(v1.begin() , v1.end());
            break;

            case 6 :
             
            cout<<"Sucessfuly erase data "<<endl ;
            v1.clear();
            
            break;
        }


    }while(ch != 0);

    
    return 0;
}