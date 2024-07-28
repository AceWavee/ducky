#include <iostream>
using namespace std ;

//  no need to set count = 0 as static data members have no garbage value. 
class employee{
 int id;
 static int count;
 public:
 void setdata(void);
 void getdata(void);

// to create a static function ( can only access static data mem.)
 static void getcount (void){
 cout<<"the count is "<<count<<endl;
 }
};

void employee :: setdata(void){
    cout<<"enter the id of employee"<<endl;
    cin>>id;
    count++;
}

void employee :: getdata(void){
  cout<<"the id of the employee is "<<id<<" and this is employee no. "<<count<<endl;
}
 
// static data functions :
// Two properties of static functions are:
// 1> They can access static data members only
// 2> They can run without making any object for the class


int employee :: count ;
// even if we want to start the counting by 1000 .
// int employee ::  count = 1000;       is totally fine.

int main () {

employee kush , anshuman , rishi;
kush.setdata();
kush.getdata();
employee::getcount();  // without using object we can call the function

rishi.setdata();
rishi.getdata();
employee::getcount();   // without using object we can call the function


anshuman.setdata();
anshuman.getdata();
employee::getcount();   // without using object we can call the function


/* if not static data member , every object has its own count so with each object the value of count resets to 0.
if all have  a same count value as in static data , once 0--->1 will not reset.
*/ 
return 0 ;
}



