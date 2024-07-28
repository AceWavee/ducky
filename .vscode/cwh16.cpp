#include <iostream>
using namespace std ;


// void swap (int x, int y) // void as swap function only swaps no. not returns any value .
// the value of x and y gets copied in void swap .

// {
// //            initially            x = 4: y = 5 : temp not defined .
//     int temp = x;             //   x = 4: y = 5 : temp = 4 
//     x=y;                      //   x = 5: y = 5 : temp = 4
//     y = temp;                 //   x = 5: y = 4 : temp = 4
// }

 // this wont work as they are actual values.
/* the value of x and y wont change as the x and y is just copied in swap fn .
 x and y are actual parameters and wont change */
 //  to change the values we need to change memory allocation using pointer variables .

 void swappointer (int* x, int* y) // void as swap function only swaps no. not returns any value .
{
    int temp = *x;             //   x = 4: y = 5 : temp = 4 
    *x=*y;                     //   x = 5: y = 5 : temp = 4
    *y = temp;                 //   x = 5: y = 4 : temp = 4
}

//  this is how to swap any value by using a temporary variable temp .

int main () {

int x=4 , y=5 ;
cout <<" the value of x is "<<x<<" and the value of y is "<<y<<endl;
//swap (x,y); // this wont work as they are actual values.

// this is known as call by reference .
swappointer (&x , &y);
// adress of &x and y gets copied in void swappointer and swaps.
 
cout <<" the value of x is "<<x<<" and the value of y is "<<y<<endl;


return 0 ;
}

