#include <iostream>
using namespace std ;
int main () {

int a = 3 ;
 int * b ;
//  creating a pointer named " b "
b = &a;
//  & ---> is the " Derefrence Variable  " ( adress of variable . )
//  * --> is the Adress of operator 
// *b creates a pointer that helps in storing the adress of other data types. 

cout<<"the adress of variable a is :"<<b<<endl;
cout<<"the adress of variable a is :"<<&a<<endl;

// both statements mean the same

// to find the value of  a certain adress :
cout<<"the value of b which stores adress of a is :"<<*b<<endl;

// *b gives the value upon a certain adress . 

// pointer to pointer ( a pointer used to store another . )

int **c = &b; // stores adress of b which is of a 
cout<<c<<endl;
cout<<&b<<endl;

cout<<"the value stored a pointer c is : "<<**c<<endl;

return 0 ;
}