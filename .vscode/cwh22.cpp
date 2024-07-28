#include <iostream>
#include <string> 
using namespace std ;

// NESTING OF MEMBER FUNCTIONS :

// A member function can be called by using its name inside another member function of the same class is known as nesting of member functions.
 
//    by default everything in class is private unless stated public.
 
class Binary{
    private:
    string s;
    void chk_bin(void);                     // to check whether its binary or not.
    public :
    void read(void);                        // to read or enter a binary no.
    
    void ones(void);
    void display(void);

//  if we wish to inverse the ones to zero , vice versa and displaying .  
 };
// defining declared functions :
 void Binary :: read(void){

      cout<<"Enter  a binary number"<<endl;
      cin>>s;
 }

 void Binary :: chk_bin(void)
{
    
    for (int i = 0 ; i < s.length() ; i++)
    {
               if(s.at(i)!='0' && s.at(i)!= '1' )
        {
            cout<<"not a binary number "<<endl;
            exit(0);
        }
    }
    
 }

void Binary :: ones(void)
{
  chk_bin(); // nesting ( calling another fn in fn.)
//   if we want to use it without impementing objects  , remove b.chk_bin() and use it here.
// it helps in securing data in pvt class.
// chk_bin can be called out from any function . as by nesting.
   for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
       
          else {
            s.at(i)='0';
            }
    }

}

void Binary :: display(void){
    cout<<"the number displayed is : "<<s<<endl;
}
int main () {
 /* 
 objects can be declared along with the class 

 class Employee{
  body
 } rohan ,  kush , gaurav ;

 its a valid syntax
 */
Binary b;
b.read();
// b.chk_bin();
b.display();
b.ones();
b.display();

return 0 ;
}

//   we made chk_bin() a pvt class but in can be used using nesting .