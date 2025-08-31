#include<iostream>
#include<map>
/*
4:Create an application using map for storing key and value
   key:int
   value:Account type
   Create Account class with actid ,name,balance
   Create Menu driven app
   1:Add Account
   2:Display all
   3:Search account by actid;
   4:Remove all*/
using namespace std ;
class Account{
    private :
    int actid ;
    string name ;
    double balance ;
    public :

    Account(int actid , string name , double balance){
        this->actid=actid ;
        this->name=name;
        this->balance=balance;
    }

    int getActId(){
        return actid;
    }

    string getName(){
        return name;
    }

    double getBalance(){
        return balance;
    }
     void display(){
        cout<<"actid = "<<actid <<endl ;
        cout<<"name = "<<name <<endl ;
        cout<<"balance= " <<balance <<endl ;

     }

};
int main(){
    map<int , Account> m1 ;
    int ch ;
    Account * acc ;
    int actid ;
    string name ;
    double balance ;
    int key ;

    do{
        cout<<"1:Add Account \n 2:Display all \n 3:Search account by actid  \n 4:Remove all "<<endl ;
        cout<<"Please Enter a choice "<<endl ;
        cin >> ch ;
        switch(ch){
            case 1 :

            cout <<"Add.  Account "<<endl ;
            cout<<"Please Enter actid "<<endl ;
            cin >> actid ;

            cout<<"Please Enter name : "<<endl ;
            cin >>name ;

            cout<<"Please Enter balance "<<endl ;
            cin >> balance;

            // cout<<"Please Enter a key "<<endl ;
            // cin >> key ;
            acc = new Account(actid , name , balance);
            
            m1.insert({actid , *acc});  // insert element into map
            

            break ;
            case 2 :
            for (auto &entry : m1) { // for itreation 
            cout << "Key: " << entry.first << endl;
            // cout << "ActID: " << entry.second.getActId() << endl;
            // cout << "Name: "  << entry.second.getName()  << endl;
            // cout << "Balance: " << entry.second.getBalance() << endl;
            entry.second.display();
            cout << "-------------------" << endl;
            }
            break ;
            case 3 :
            int searchId;
            cout<<"Enter a Search Id "<<endl ;
            cin >> searchId ;
            if(!m1.empty()){ //check here map is empty or not 

            for (auto &entry : m1){

                

                if(entry.second.getActId()==searchId){
                   
                  cout << "ActID: " << entry.second.getActId() << endl;
                  cout << "Name: "  << entry.second.getName()  << endl;
                  cout << "Balance: " << entry.second.getBalance() << endl;
                  cout << "-------------------" << endl;
                }

            }
        }else{
            cout<<"map is empty .please enter account "<<endl ;
        }
            break ;
            case 4 :
            cout<<"Remove all data from the map "<<endl ;
            m1.clear(); //remove data from map 
            break ;
        }
    }while(ch !=0 );
    return 0;
}