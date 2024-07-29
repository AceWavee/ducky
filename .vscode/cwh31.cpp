#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printnum(void)
    {
        cout << "the number is " << a << " + i" << b << endl;
    }
    //  a class can have multiple constructors.
    // this is constructor overloading.

    complex(int z)
    {
        a = z;
        b = 0;
    }
};

int main()
{

    complex c1(4, 5);
    c1.printnum();

    complex c2(6);
    c2.printnum();

    return 0;
}