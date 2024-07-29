#include <iostream>
#include <cmath>
using namespace std;

class coordinate
{
    int x, y;

public:
    coordinate(int, int); // constructor declaration
    friend void distance (coordinate o1, coordinate o2);

    void display(void)
    {
        cout << "the coordinates are (" << x << " , " << y << ")" << endl;
    }
};

void distance(coordinate o1, coordinate o2)
{
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << dist << endl;
}

coordinate ::coordinate(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    coordinate a(24, 32);
    coordinate b(28, 35);

    a.display();
    b.display();

    distance (a,b);

    
    return 0;
}

