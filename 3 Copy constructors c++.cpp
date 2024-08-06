#include <iostream>
using namespace std;

class Point 
{
private:
    int x,y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    Point(const Point& other) 
	{
        x = other.x;
        y = other.y;
    }
    void display() 
	{
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() 
{
    Point P1(10, 15);
    cout << "P1: ";
    P1.display();
    Point P2 = P1;
    cout << "P2: ";
    P2.display();
    return 0;
}
