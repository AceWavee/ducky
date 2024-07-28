#include <iostream>
using namespace std ;
//  function is a important exmple of top down programming which is different from oop .

//  int sum (int a , int b )
// {
//   int c ;
//   c = a+b;
//    return c ;
//    whatever returns here is printed instead of sum(num1 , num2) .
// in case of main function , our return was 0 .
// }

//  function prototyping : 
// (to declare the function to compiler before executing to avoid errors.)
// if we create a function after the main() , sometimes it shows error hence we need prototyping .

// syntax of prototyping :
//   datatype function  (argument)
//  int sum (int a , int b ); 

int sum (int a , int b ); // --acceptable
// int sum (int, int ); ----acceptable 
// int sunm ( int  a , b ); ---not acceplable 

// fn prototyping g() 
void g();

int num1 , num2 ;
int main () {

 cout<< " enter num1 "<<endl;
 cin>>num1;

 cout<< " enter num2"<<endl;
 cin>>num2;

cout<<"the sum of num1 and num2 is :"<<sum(num1 , num2)<<endl;
g();

return 0 ;
// return 0 means program is executed succesfully without any errors .
}

int sum (int a , int b )
{
  int c ;
  c = a+b;
return c ;
}

//  a and b here are formal parameters which dont exist.
// num1 and num2 are actual parameters which do exist.

// if we create a void function suppose :

void g()
{
    cout <<"good morning"<<endl; 
}
//   void function doesnt  do anything just returns the value inside

