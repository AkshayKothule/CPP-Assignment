#include<iostream>
#include<set>
using namespace std ;
/*Create an application using set .
  Accept name of city from user and store in set
  Create Menu drivien app
  1:add city
  2:display  all city
  3: serach city*/
int main(){
    set<string> s1;
    int ch;
    string city ;
    do{
        cout<<"\n 1.add city \n 2.display all city \n 3.search city \n "<<endl ;
        cout<<"please Enter a choice "<<endl ;

        cin >> ch ;

        switch(ch){
            case 1 :
            cout<<"please Enter a city "<<endl ;
            cin >> city ;
            s1.insert(city);
            break ;
            case 2 :
            cout<<"display details "<<endl ;
            for(string i : s1){
                cout<< i << "  ";
            }

            break ;
            case 3 :
            string searchCity ;
            cout<<"Please Enter a City to search : "<<endl ;
            cin >> searchCity ;
           if(!s1.empty()){
            for(string i : s1){
                if(i==searchCity){
                    cout<<"City present in set "<<endl ;
                }
            }
        }else{
            cout<<"set is Empty .please Enter a city "<<endl ;
        }
            break ;
        }

    }while(ch !=0);
    return 0;
}