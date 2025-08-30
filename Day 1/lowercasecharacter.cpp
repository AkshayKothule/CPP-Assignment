#include<iostream> 

using namespace std ;

//a e i o u :- Vowels 
void checkVowelsConsonant(char ch){

    if(ch=='a' || ch=='e' || ch =='i' || ch=='o' ||ch=='u'){
        cout<<"it is Vowels : "<<""<<ch<<endl ;
    }else{
        cout<<"it is consonant: " <<""<<ch<<endl ;
    }

}
int main(){
    char ch ;
    cout<<"Enter the character :"<<endl ;
    cin >> ch ;
    checkVowelsConsonant(ch);
}