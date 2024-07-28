// #include <iostream>
// using namespace std ;

// class employee{
//  int id;
//  int salary ;

//  public :
//  void setid(void)
//  {
// cout<<"enter  id of the employee "<<endl;
// cin>>id;
//  }
//  void getid(void){
//     cout<<"the id of the employee is "<<id<<endl;
//  }

// };

// int main () {
// //  using objects as arrays if many objects are present.
// employee fb[4]; // creating a single object.

//   for(int i=0 ; i<4; i++){
//     fb[i].setid();
//     fb[i].getid();
//   }

// return 0 ;
// }

#include <iostream>
using namespace std;
// passing objects as function arguments or variables.

class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)
    { //  2 objects of complex class.
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printnumber(void)
    {
        cout << "your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();

    c2.setdata(3, 4);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    //  passing c1 and c2 which are objects into o1 and o2 which further calls the function by o1.a and o1.b
    c3.printnumber();

    return 0;
}