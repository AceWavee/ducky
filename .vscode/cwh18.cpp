 //  recursive functions .

#include <iostream>
using namespace std ;
int a ;
// int factorial (int n)
// {
//     if (n<=1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);

// }

int fib (int x)
{
    if(x<2)
    {
        return 1;
    }
    return (fib (x-2)+ fib(x-1));
}
int main() {
// //   factorial of a number :
// cout<<"enter a number"<<endl;
// cin>>a;

// cout<<"the factorial of a number is "<<factorial ( a ); 

// ------------------------------------------------------------------------------------ -

//  to create a fibbonacci series .
//  1 1 2 3 5 8 13 21 34 55 89 144 233 377 .....  find the nth term. (starts from 0'th position)

// basic logic - first 2 terms should be 1 and 1 . 
// adding n-2 and n-1 .

cout<<"enter the position"<<endl;
cin>>a;

cout<<"the value of a number at position"<<a<<"is"<<fib(a)<<endl;

return 0;
}
// use recursion only if it simplifies the problem else iterative approach .