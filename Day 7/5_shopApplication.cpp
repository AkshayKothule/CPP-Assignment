
#include<iostream>
#include<fstream>


using namespace std;
class Product{
    private :
    int prId;
    char name[20] ;
    int qty;
    double price ;

    public :
     Product(int prId , char * name , double price){
        this->prId=prId;
        this->name=name;
        strcpy(name , name)
     }


};

void writeBinaryStream(){

}
int main(){
    int ch;
    do{
        cout<<"1:Add Prd \n 2:Display Prds \n 3:Search Prd \n 4:Update/Modify prd \n 5:delete prd"<<endl;
        cout <<"Please Enter a choice "<<endl 
        cin >> ch ;

        switch(ch){
            case 1:
            break ;
            case 2 :
            break ;
            case 3 :
            break ;
            case 4 :
            break ;
            case 5 :
            break ;
            case 6 :
            break ;
        }

    }while(ch !=0 );
    return 0;
}