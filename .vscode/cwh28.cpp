// // examples of friend functions .
// #include <iostream>
// using namespace std;
// //  needs forward decn as in class x , we havent declared that in friend (x,y) , y is present
// class y;

// class x
// {
//     int data;

// public:
//     void setvalue(int value)
//     {
//         data = value;
//     }
//     friend void sum(x, y);
// };

// class y
// {
//     int num;

// public:
//     void setvalue(int value)
//     {
//         num = value;
//     }
//     friend void sum(x, y);
// };

// void sum(x o1, y o2)
// {
//     cout << "the sum of values of class x and y is : " << o1.data + o2.num << endl;
//     // throws error as data and num are private so declaring as frnd.
// }

// int main()
// {
//     x a1;
//     y b1;

//     a1.setvalue(3);
//     b1.setvalue(5);

//     sum(a1, b1);

//     return 0;
// }

// --------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// forward declaration;
class c2;

class c1
{
    int a;

public:
    void invalue(int value)
    {
        a = value;
    }
    friend void swap (c1 &, c2 &);

    void display(void)
    {
        cout << a << endl;
    }
};

class c2
{
    int b;

public:
    void invalue(int value)
    {
        b = value;
    }
    friend void swap (c1 &, c2 &);

    void display(void)
    {
        cout << b << endl;
    }
};

/*for swapping :
temp = a;
a=b;
b=temp;
*/

// using & as we swap adresses not numbers ... so call by reference.

void swap(c1 &x, c2 &y)
{
    int temp = x.a;
    x.a = y.b;
    y.b = temp;
}


int main()
{
    c1 h1;
    c2 h2;

    h1.invalue(34);
    h2.invalue(67);
    swap(h1, h2);

    h1.display();
    h2.display();


    return 0;
}