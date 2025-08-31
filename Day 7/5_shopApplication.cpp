
#include<iostream>
#include<fstream>


using namespace std;
class Product{
    private :
    char name[20] ;
    int qty;
    double price ;

    protected : 
    int prId ;

    public :
    Product(){
        prId=0;
        name[0]='\0';
        qty=0;
        price=0;
    }
     Product(int prId , char *name ,int qty ,  double price){
        this->prId=prId;
        strcpy(name , name);
        this->qty=qty;
        this->price=price ;
     }
      
     int getById(){
        return prId ;
     }
     void display(){
        cout<<"\t \t display details product "<<endl ;
        cout<<"prID = "<<prId<<endl ;
        cout<<"Name ="<<name <<endl;
        cout<<"qty = "<<qty<<endl ;
        cout<<"Price ="<<price <<endl;

        cout<<"---------------------------------------------------------------"<<endl;

     }


};

void writeBinaryStream(){
    ofstream  writeFile("product.dat" ,ios ::binary | ios::app) ;
    cout<<"Entre product_ID , name , qty , price  "<<endl ;
    int prId;
    char name[20] ;
    int qty;
    double price ;
    cin >> prId >> name >> qty >>price ;

    Product p1(prId , name , qty , price );

    writeFile.write((char*) &p1 , sizeof(Product));
    cout<<"product data stored into binary file "<<endl;
    writeFile.close();

}

void readBinaryStream(){
     Product p ;
     ifstream inputfile("product.dat");

     if(!inputfile.fail()){
        while(inputfile.read((char *) &p , sizeof(Product))){
            p.display();
        }
     }
}
void searchBinaryStream() {
    Product p;
    int searchId;
    cout << "Please Enter a search Id: ";
    cin >> searchId;

    fstream searchfile("product.dat", ios::in | ios::binary);
    if (!searchfile) {
        cout << "Error: Could not open file!" << endl;
        return;
    }

    // Reset get pointer to beginning
    searchfile.seekg(0, ios::beg);

    bool flag = false;
    while (searchfile.read((char*)&p, sizeof(Product))) {
        if (p.getById() == searchId) {
            cout << "Record Found  ID Is : " << p.getById() << endl;

            cout<<"--------------------------------------------------------"<<endl;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "Record Not Found: " << searchId << endl;
    }

    searchfile.close();
}



int main(){
    int ch;
    do{
        cout<<"1:Add Prd \n 2:Display Prds \n 3:Search Prd \n 4:Update/Modify prd \n 5:delete prd"<<endl;
        cout <<"Please Enter a choice "<<endl ;
        cin >> ch ;

        switch(ch){
            case 1:
            writeBinaryStream();
            break ;
            case 2 :
            readBinaryStream();
            break ;
            case 3 :
            searchBinaryStream();
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