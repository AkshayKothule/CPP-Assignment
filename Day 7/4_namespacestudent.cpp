#include<iostream>

using namespace std ;
/*7:Create Student class in namespace CDAC namespace .
    Create another Student class in IACSD namespace.
    Try to access both student classes using namespace*/
namespace CDAC{

    class Student{
        private :
        int rollNo ;
        string name ;
        string learnLnag ;

        public :
        Student(int rollNo , string name , string learnLnag){
            this->rollNo=rollNo;
            this->name=name ;
            this->learnLnag=learnLnag;
        }

        void display(){
            cout<<"Display student details "<<endl ;
            cout<<"rollNo ="<<rollNo<<endl;
            cout<<"name ="<<name<<endl;
            cout<<"learn lang ="<<learnLnag<<endl;
            cout<<"-------------------------------------------------------------"<<endl;
        }

        
    };
} ;
namespace IACSD{

    class Student{
        private :
        int rollNo ;
        string name ;
        string learnLnag ;

        public :
        Student(int rollNo , string name , string learnLnag){
            this->rollNo=rollNo;
            this->name=name ;
            this->learnLnag=learnLnag;
        }

        void display(){
            cout<<"Display student details "<<endl ;
            cout<<"rollNo ="<<rollNo<<endl;
            cout<<"name ="<<name<<endl;
            cout<<"learn lang ="<<learnLnag<<endl;
            cout<<"-------------------------------------------------------------"<<endl;
        }

    };

};

int main(){
    CDAC :: Student obj(12 , "Akshay" , "java") ;
    obj.display();

    IACSD :: Student obj1(162 , "rushi " , "CPP");
    obj1.display();


    
    
    return 0;
}

// namespace info 

/*
Namespace is like a special container or a label that holds a group of names - like variables, functions, or classes - to avoid confusion when we have the same name used in different parts of the program.

*/