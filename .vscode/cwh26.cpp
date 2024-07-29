#include <iostream>
using namespace std ;

 
  class complex{ 
  int a , b ;
  public:

  void setnumber(int v1 , int v2){
     a = v1;
     b = v2;
  }
//    declaring as a friend function so to access data of private class.
 friend complex sumnum ( complex o1 ,  complex o2);

   void printnum(void){
    cout<<"the number is : "<<a<<" + "<<b<<"i"<<endl;
   }
  
  };
// the fn here is outside the class so it needs permission to access.
  complex sumnum ( complex o1 ,  complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a) ,(o1.b + o2.b));
    // fn directly trying to access private class members.
    // declaring friend function but it doesnt mean sumnum is a data mem of class , its just declaration
    return o3;
  }

int main () {

 complex c1 , c2 , sum ;
 c1.setnumber(1,4);
 c1.printnum();
 
 c2.setnumber(5,8);
 c2.printnum();

sum = sumnum(c1 , c2);
sum.printnum();

return 0 ;
}

/*  properties of friend functions :

1.  not in the scope of class or not the member of class.
2.  since its not in the scope of the class , it cant be called using the object 
eg :    c1.sumnum()  is wrong

3.  can be invoked without the use of any object.
4.  usually contains the objects as the arguments/ takes the values as objects.
5. can be declared anywhere in either the private or public part of the class.
6. it cannot access the members directly by their name so it needs  object_name.mem_name to acess any member .

*/  
