// control structures in c++ ( basic control structures )
//  1.  sequence structures.
//  2.  selection structures. 
//  3.  loop structures.


#include <iostream>
using namespace std;

int main(){
    
    int age ;
    cout << "tell me your age :"<<endl;
    cin>>age;
   
    if(age<18) {
 cout << "you arent allowed to enter the party :"<<endl;

    }
   else if(age==18){
    cout<< "you are allowed but with a kid pass "<<endl;

   }
   else if (age>18){
   cout<<"you can enter the party"<<endl;
   }

   switch (age )
   {
   case 18:
   cout<<"you are 18"<<endl;
    break;
   
   case 22:
   cout<<"you are 22"<<endl;
   break;


   default:
   cout<<"no other special cases "<<endl;
    break;
   }

     cout<<"first program of switch case"<<endl;


    
    
    
    return 0 ;
}