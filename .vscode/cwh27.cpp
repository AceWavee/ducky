#include <iostream> // compiler starts reading from here.
using namespace std;

//  forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    /* compiler finds an error because there's no existence of complex xlass.
    / so we need to do forward declaration to the compiler.

     int sumrealcomplex (complex o1 , complex o2){
     return ( o1.a + o2.a); }  ------> error

    error as we declared that complex class is present but no guarantee that a or b is also present in that class , so we need declaration again. */

    int sumrealcomplex(complex, complex); // declaring
};

// declaring calculator class as friend in complex class.

class complex
{
    int a, b;
// individually declaring frnds but if we have more fn , we can declare entire class as friend .

// syntax :
//  friend class calculator ;
    friend int calculator ::sumrealcomplex(complex o1, complex o2);

public:
    int setnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printnum(void)
    {
        cout << "the complex number is : " << a << " + " << b << "i" << endl;
    }
};

// declaring earlier and  execution here.
int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setnum(1, 3);
    o2.setnum(2, 5);

    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);

    cout << "the sum of real part of complex numbers is" << res << endl;

    return 0;
}