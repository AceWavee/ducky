#include <iostream>
using namespace std ;
int a ;
// for factorial :
// int factorial ( int x )
// {
//  if(x<2)
//  {
//     return 1;
//  }
//  return x*factorial(x-1);
// }

int sequence (int x)
{
if(x<=1)
{
    return 0;
}
if(x<3)
{
    return 1;
}
 return sequence(x-2)+sequence(x-1);
}

int main () {

// cout<<"enter the number :"<<endl;
// cin>>a;

// cout<<"the factorial of the number given is :"<<factorial(a)<<endl;

// fibonacci series:
//  0 1 1 2 3 5 8 ....
cout<<"enter the position of number in the series :"<<endl;
cin>>a;

cout<<"the position is :"<<sequence(a)<<endl;


return 0 ;
}