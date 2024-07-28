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

// typedef struct employee 
// {
//    int id ;
//    char favchar ;
//    float salary ;
// } ep ;

//  typedef means using another word insted of one.
// using "ep" insteadd of "struct employee" :

// ep kush ;
//  or struct employee kush ; is the same .
// kush.id = 1 ;
// kush.favchar = 'a';
// kush.salary =  120000 ;

// cout<<"the value of id "<<kush.id<<endl;
// cout<<"the value of favchar "<<kush.favchar<<endl;
// cout<<"the value of salary "<<kush.salary<<endl;


//  use of unions :
// unions are same  as structures but with better memory management .
// }
// union money 
// {
//    int rice ; // 4 bytes
//    char car ;  // 1 bytes 
//    float pounds ; // 4 bytes 

   // total 9 bytes in use if structure but as union highest memory allocation is 4.
   // memonry optimisation .

// } ;

// union money m1;
// m1.rice =  34 ;
// m1.pounds = 20.22; 
// cout << m1.pounds<<endl;

/*only prints one at a time . if value of rice is overwritten by pounds
we have to specifically mention which one to print
 not all values get printed at once . */



// enums :
enum Meal { breakfast , lunch , dinner };
cout<<breakfast<<endl;
// breakfast was allocated as 0 so 0 prints
// lunch prints 1 and this goes on .

// as meal is a data type now.
Meal m1 = breakfast ;
cout<<m1<<endl;
//  m1 prints as 0 here  .

// condition checking :
cout<<(m1==2)<<endl;
// 0 prints as 2 refers to dinner and its false .
return 0 ;
}
