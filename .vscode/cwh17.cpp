#include <iostream>
using namespace std ;

int product ( int , int );
// inline product ( int a , int b )
// only use inline in simple functions when return value isnt complex or takes less code lines.
// can be used in complex program , but it takes much memory because its repetitive.
// inline used when doing simple repetitive functions .
// {
 // return a*b;
// }
int money =  100000 ;

float moneyrecieved(int moneyhave , float factor =1.04 )
{
    return moneyhave*factor ;
} 


int main () {
int a , b ;
cout<<"enter a "<<endl;
cin>>a;
cout<<"enter b "<<endl;
cin>>b;

// cout<<"the product of a and b is :"<<product (a,b)<<endl;
// cout<<"the product of a and b is :"<<product (a,b)<<endl;
// cout<<"the product of a and b is :"<<product (a,b)<<endl;

// inline function reduces the time of compiler by executing the function at once .
// wont notice much differcence but saves time of compiler . 

// dont use inline fn in recursive programs and static variables , loops , switch cases. 
// static variables :


//  DEFAULT ARGUMENTS .
// if not any value specified then use default arguments .
// example 

cout<<"if you have "<<money<<" will get multiplied by"<<moneyrecieved(money)<<endl;
// this is default argument as no factor mentioned its get multiplied by 1.04
// always write default arguments in extreme right in the function . 
// eg :   ( money , factor) , factor is the default one here.

cout<<"if you are vip and  have "<<money<<" will get multiplied by"<<moneyrecieved(money , 1.1 )<<endl;
// here we updated the float factor so new money.

return 0 ;
}
 
//  not recommended to use below lines with inline functions .
 int product ( int a , int b )
 {
    static int c = 0 ; 
// this line only used once and and next time it updates
//     as c = 0+1 ---  a*b+1 prints and next time a*b+2 .. and so on .
//     this is use of static that prints intialisation line once .
    c = c + 1;
    return a*b+c ;
 }

//  constant arguments .
// such that the anybdy cant change the value of the argument 

// eg :
 int strlen(const char *p)

//  " const " keyword here to make the value of pointer char p unchangeable .
 



