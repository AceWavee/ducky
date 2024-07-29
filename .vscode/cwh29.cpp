#include <iostream>
using namespace std ;

class complex{

    int a , b;
    public :
    /* CREATING A CONSTRUCTOR .
    1. constructor is a special member function with as same name as of class.
    2. it is used to  initialize the object of the class.
    3. it is automatically invoked whenever the object is called.
    4. a constructor doesnt have a return type. 
    */

   complex (void); // constructor declaration

   void printnum(void){
    cout<<"the complex num is : "<< a <<" + "<<b<<"i"<<endl;
   }

};

// defining a constructor :  ( default constructor accepts no parameter.)
complex :: complex(void)
{
    a=0;
    b=0;
    // default constructor  , initial value 0;
}

int main () {
 complex c1;

 c1.printnum();

return 0 ;
}

// characteristics of constructor :
/*

1. its should be declared in the public section of the class.
2. they are automatically invoked when the object is created. (i.e any command in constructor gets automatically printed or executed.)
3. do not have return types ,  not even void.
4. it can have default arguments.
5. we cannot refer to their adress.

*/