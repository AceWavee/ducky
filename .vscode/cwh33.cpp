// dynamic initialisation of objects using constructors.

#include <iostream>
using namespace std ;

class bankdeposit{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

    public:

    bankdeposit(){};  // is user dont give a value., for default argument.
    bankdeposit(int p ,  int y ,  float r);  // rate can be like 0.04
    bankdeposit(int p ,  int y ,  int r);   // rate can be like 10 percent.
    void show (void);
};

bankdeposit :: bankdeposit(int p ,  int y ,  float r){
    principal = p;
    interestrate = r;
    years = y ;
    returnvalue = principal;
     for (int i = 0; i < y; i++)
     {
        returnvalue = (1+interestrate) * returnvalue;
     }
}  

bankdeposit :: bankdeposit(int p ,  int y ,  int r){
    principal = p;
    interestrate = float (r)/100;
    years = y;
    returnvalue = principal;
     for (int i = 0; i < y; i++)
     {
        returnvalue = (1+interestrate) * returnvalue;
     }
}  

void bankdeposit :: show(){
    cout<<"the principal amount was "<<principal<<" and after "<<years<<" years is "<<returnvalue;
}


int main () {
  
bankdeposit bd1 , bd2 , bd3 ;

// as soon as one object creates, the compiler finds the constructor.
// so we need to create a blank constructor for default constructors like bd3.
int p , y ;
int R;
float r;

cout<<"the values of p y  and r is "<<endl;
cin>>p>>y>>r;

bd1 = bankdeposit(p , y , r);
bd1.show();
// explicit call

bd2 = bankdeposit(p , y , R);
bd2.show();
return 0 ;
}
