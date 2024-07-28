#include <iostream>
using namespace std ;

int add(int a , int b)
{
    return a+b;
}
// int add means the function has a return value type of int .
int add(int a , int b , int c)
{
    return a+b+c;
}

//  creating 2 functions with same name but it still figures it out by matching the arguments.
// this is fucntion overloading.
int main () {
cout<<"the sum of 3 and 6 is :"<<add(3,6)<<endl;
cout<<"the sum of 3 and 6 and 7 is :"<<add(3,6,7)<<endl;

return 0 ;
} 
