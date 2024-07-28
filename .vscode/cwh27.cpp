#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int setnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend complex sum(complex o1, complex o2);
    
    void printnum(void)
    {
        cout << "the complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex sum(complex o1, complex o2)
{
    complex o3;
    o3.setnum((o1.a + o2.a) + (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setnum(1, 2);
    c1.printnum();

    c2.setnum(3, 4);
    c2.printnum();

    sum.setnum(c1, c2);
    sum.printnum();

    return 0;
}