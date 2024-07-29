//  copy constructors :

#include <iostream>
using namespace std ;

class number{
    int a;

    public:
// has to make a default constructor :

    number(){
        a=0;
    };

    number (int num){
        a=num;
    }
// syntax of a copy constructor.
// but even if we dont write this , wont throw error as compiler provides its own default copy constructor.
    number(number &obj){
        cout<<"copy constructor has been called."<<endl;
        a = obj.a;
    }

    void display(void){
        cout<<"the number displayed is "<<a<<endl;
    }

};

int main () {

number x , y , z(45) , z2;
x.display();
y.display();
z.display();

// for copy constructors
number z1(x);   // copy constructor invoked.
z1.display();

// z2 = z; -> copy constructor not invoked as z2 is already created and we assigned z to it.
// so there's no mean of constructor invoking.

// but 

// number z3 = z;      copy constructor will be invoked beacuse we made object z3 in this line.
return 0 ;
}