// #include <iostream>
// using namespace std ;
 
// class Employee
// {
// private:
//     int a , b , c ;
// public:
//     int d , e ;
// void setdata(int a , int b ,  int c); //declaration
// // variables of pvt class cannot be declared directly so we use fn. to assign data.
// void getdata (){
//     cout<<"the value of a is : "<<a<<endl;
//     cout<<"the value of b is : "<<b<<endl;
//     cout<<"the value of c is : "<<c<<endl;
//     cout<<"the value of d is : "<<d<<endl;
//     cout<<"the value of e is : "<<e<<endl;
// }
// };

// void Employee :: setdata(int a1 , int b1 , int c1){
// a=a1;
// b=b1;
// c=c1;
// }

// int main () {
// Employee harry;
// harry.d = 34;
// harry.e = 89;
// harry.setdata(1,2,4);
// harry.getdata();
// // getdata prints the value from the function.
// //  a b c data cannot be set by harry.a because in private class.| but data for d, e can be set.
// return 0 ;
// }


#include <iostream>
using namespace std ;

class student
{
private:
    int bday ; 
public:
    int roll , s ;
  void setdata(int a ); //  declaration of variables 
  void getdata(){
    cout<<"bday date :"<<bday<<endl;
    cout<<"rollno :"<<roll<<endl;
    cout<<"standard :"<<s<<endl;

}
};

void student :: setdata(int a ) // defining function outside the class.
{
   bday = a;
}
int main () {
 student kush;
 
 kush.roll = 21;
 kush.s = 13;
 kush.setdata(2);
 kush.getdata();

return 0 ;
}

