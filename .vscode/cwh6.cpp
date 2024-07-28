// >>endl is used to shift to next line.. can be used instead of \n.

// two types of header files :
// 1. system header files that comes with the compiler.
// #include<iostream>
// 2. user defined header files which are written by the prgogrammer.
//  eg

// #include "file.h"
// only works when  file.h is already present in the directory . 
// create a blank file named file.h for including into the  directory.

#include <iostream>

using namespace std ;
 int main(){
  int a = 6 ,  b = 9;
//  cout<< "a++ is"<<a++ <<endl;
//  a=6 printed then increment 
//  cout<< "++a is"<<++a <<endl;
//  increment of a then printed. so a=7 as previous inc of a++ then ++a so 8
//  cout<< "a-- is"<<a-- <<endl;
//  8 printed then decrement.
//  cout<< "--a is"<<--a <<endl;
//  decrement of 8 to7 then again dec to 6.



//  comparison operators in c++:
 cout<< "whether a>b" <<( a>b ) << endl;
cout<< "whether a==b" <<(a==b ) << endl;
cout<< "whether a<=b" <<(a<=b ) << endl;
cout<< "whether a>=b" <<(a>=b ) << endl;


//  logical operators: ( using comparison operators together.)

// cout <<"the value of ((a==b) && (a>b)) logic is:" << ((a==b) && (a>b)) <<endl;
// will only be true if both the logic mentioned is true.
// including parenthesis is to simplify the logic
//  $$ - "and" command .


// cout << "the value of ((a==b) || (a<b)) logic is:" << ((a==b) || (a<b))<<endl;
// || is the ' or ' operator. is either 1 is true its truee.

// cout << " the value of !(a==b) logic is:" << (!(a==b));
// not operator reverses the output, as a==b is 0 but the output is 1.


    return 0;
 }
