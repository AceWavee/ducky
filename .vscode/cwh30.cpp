#include <iostream>
using namespace std ;

class complex{

    int a , b;
    public :
   complex (int , int ); // constructor declaration

   void printnum(void){
    cout<<"the complex num is : "<< a <<" + "<<b<<"i"<<endl;
   }

};

// defining a parameterized constructor :
complex :: complex(int x , int y )
{
    a=x;
    b=y;
    // default constructor  , initial value 0;
}

int main () {
 
//  implicit call :

 complex a(4,5);
 a.printnum();

//  explicit call :
complex b = complex(5,6);
b.printnum();

// both results in the same value.
return 0 ;
}