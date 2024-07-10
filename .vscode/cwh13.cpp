#include <iostream>
using namespace std ;
int main () {

// use of arrays. 
//  array is an allocation of speciifed data to the memory .
  int marks[4] = {23 , 56 , 78 , 90} ;
  // cout<<marks[0]<<endl;

//  in an array of 4 --> 23 is allocated at 0 ,  56 at 1 , 78 at 2 , 90 at 3 .

// int mathmarks[4] ;
// mathmarks[0] = 56 ; 
// cout<<mathmarks[0]<<endl;

// on changing the value of array before printing  , it gets updated.


// use of arrays in loops :
// for loop :

// for ( int i=0 ; i<4 ; i++) 
// {
//     cout<<"the value of"<<i<<"is"<<marks[i]<<endl;
// }

// using  while and do while  loop :

// int i = 0 ;
//  while (i<4) 
//  {
//    cout<<marks[i]<<endl;
//    i++ ; 
//  }

//  do while loop :
//  do 
//  {
//   cout<<marks[i]<<endl;
//   i++;
//  } while (i < 4 );


//  use of arrays with pointers :

// for any variable suppose int a = 3;  the adress can be given by  &a ; 
// but in arrays the name of 'ARRAY' itself gives the adress of first block of array
// &array is incorrect wayy.

//  for eg an integer pointer :

int *p =  marks; 
// creates a pointer variable p for marks .
cout <<"the value at p : "<<*p<<endl;
// *p gives the value of first block ----> 23 .
// for the next block

cout <<"the value at p : "<<*(p+1)<<endl;
//  p+1 gives the value to the next block.
cout <<"the value at p : "<<*(p+2)<<endl;
cout <<"the value at p : "<<*(p+3)<<endl;

//  increment and decrement operators .

cout<<*(p++)<<endl;
//  prints first block then increment to next block.

cout<<*(++p)<<endl;
// increments to next block. then prints .


















return 0 ;
}