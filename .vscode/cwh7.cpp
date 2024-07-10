#include <iostream>
using namespace std;


int c = 90 ;

int main(){
    
//     int a , b , c ;
//     cout <<"ENTER THE VALUE OF A : "<<endl;
//     cin>>a;
  
//     cout <<"ENTER THE VALUE OF B : "<<endl;
//     cin>>b;


//    c= a + b;
//     cout<<"the sum of a and b is :"<< c<<endl;

//     cout<<"the global variable is :"<<::c<<endl;
    // :: is the scope resoltution operator and used for precedence of global over local variable.4


// float ,  double , long double 
// in general in c++ .. 45.5 ----> is considered as a double.
// eg:
 float d = 78.4;
 cout<<"the size of 78.4 is" << sizeof(78.4)<<endl;
//  the output is 8 because the size is 8 of double in a 64 bit os.
// also . if d = 78.5f of 78.5F -----> denotes it has been coverted to float.

float x =  78.5f;

// for long double .. eg : long double e = 56.4l or 56.4L . 
 long double e = 56.4l;
 cout << "the size of 56.4 :"<<sizeof(56.4)<<endl ;



//  reference variables :
float v = 86.5f;
float & n = v;
cout << n<<endl;

// using & ---> used for ref variable and using 2 or more var. to represent a certain value.


// typecasting - to change one variable form to another.
float h = 76.5f;
float g =  int (h); // line 1 
cout<<h<<endl;
cout<<g<<endl;

// float g has been changed to int h and the value printed will be 76 instead of 76.5 . 
float  j =  (int)h; // line 2

// both line 1 and line 2 refer to same method of typecasting.

float t = 89.7;
int q = 89 ;

// typecasting 

cout<<int(t)<<endl ; 
cout<<float(q);

// float t is converted to integer t .

    
    
    
    
    return 0;
}