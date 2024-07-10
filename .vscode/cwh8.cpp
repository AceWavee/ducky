// constants ,  operators and operator precedence.

#include <iostream>
#include <iomanip>
// using <iomanip> to include const int function.

 
 using namespace std; 

int main (){
   
    
    const int a = 8 ;
    cout<< a << endl;

// if used the keyword const int a ---> means cannot change the value of a any further 
// it will show as an error .  the value of a is fixed.

// manipulators eg are --> endl , header class #include <iomanip>

// OPERATOR PRECEDENCE 

int b , c , d ,  e ;
 e = (((a*b) + c) - d) ;

/*  see operator precedence list from 
 https://en.cppreference.com/w/cpp/language/operator_precedence */

//  if two operators of same precedence,  check by associativity . 
// put brackets accordingly from top to bottom in the precedence order.




    


    return 0 ;
}