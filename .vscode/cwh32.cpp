#include <iostream>
using namespace std ;

class simple{
    int a , b , c;

    public :

    simple (int x , int y = 8 , int z = 9){
        a = x;
        b = y;
        c = z;
    }

    void display(void){
    cout<<"the value of the data's are :" <<a<<" and "<<b<<" and "<<c<<endl;
    }
};

int main () {

simple o1(10,15,13);
o1.display(); 
// if we dont put values here default values of b and c will take over.

return 0 ;
}