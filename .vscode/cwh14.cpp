#include <iostream>
using namespace std ;

int main () {

// as arrays are used to store same type of data 
// structures can be used to store different types of data types/ .
// eg :
 
//  syntax :

// struct employee 
// {
//    int id ;
//    char favchar ;
//    float salary ;
// };
 
//   storing diffn types of data in strcuture employee .

// using typedef :
 
typedef struct employee 
{
   int id ;
   char favchar ;
   float salary ;
} ep ;

//  typedef means using another word insted of one.
// using "ep" insteadd of "struct employee" :

ep kush ;
//  or struct employee kush ; is the same .
kush.id = 1 ;
kush.favchar = 'a';
kush.salary =  120000 ;

cout<<"the value of id "<<kush.id<<endl;
cout<<"the value of favchar "<<kush.favchar<<endl;
cout<<"the value of salary "<<kush.salary<<endl;

return 0 ;



//  use of unions :
// unions are same  as structures but with better memory management .


}