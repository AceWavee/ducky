/* destructors . (to free the memory allocated to objects , constructors etc.)
1. never takes an argument nor returns any value. */

#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number--> ;" << count << endl;
    }

    // num(){}  ----> for constructor
    //  ~num(){}  ---->  for destructor

    ~num()
    {
        cout << "this is the time when destructor is called for object number -->" << count << endl;
        count--;
    }
};

int main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first object n1" << endl;

    num n1;     // constructor called for object 1 as its created 
    {
        cout << "entering the block" << endl;
        cout << "creating two more objects" << endl;
        num n2, n3;  // constructor called for 2 and 3 

        cout << "exiting the block" << endl;
    } 

    // as soon as it leaves the block n2 and n3 are destructs and destructor is called.

    cout << "back to main" << endl;
    // at last destructor for n1 is called as n1 has no more use.

    return 0;
}
