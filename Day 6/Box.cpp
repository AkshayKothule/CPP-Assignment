#include <iostream>
using namespace std;

template <typename T>
class Box1 {
public:
    T a;
    T b;

    // Constructor takes two arguments
    Box1(T c, T d) : a(c), b(d) {}

    void display() {
        T area = a * b;
        cout << "Area = " << area << endl;
    }

     T getValue(){
        return  a ;
     }
     T setvalue(T a){
        this->a=a;
     }
};

int main() {
    int a = 4, b = 5;

    // Must pass 2 arguments, since constructor requires 2
    // Box1<int> b1(a, b);
    Box1<double> b1(10.0, 5.0 );
    b1.setvalue(100.00);
  cout<<b1.getValue();
    b1.display();  // show the area

    return 0;
}
