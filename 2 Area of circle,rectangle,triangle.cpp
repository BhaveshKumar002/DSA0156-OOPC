#include <iostream>
#include <cmath>
using namespace std;

class Shape {
private:
    double area;
public:
    Shape(double radius) {
        area = M_PI * radius * radius;
    }
    Shape(double length, double width) {
        area = length * width;
    }
    Shape(double base, double height, bool isTriangle) {
        area = 0.5 * base * height;
    }
    double getArea() const {
        return area;
    }
};

int main()
{
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    Shape circle(radius);
    cout << "Area of circle: " << circle.getArea() << endl;

    double length, width;
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    Shape rectangle(length, width);
    cout << "Area of rectangle: " << rectangle.getArea() << endl;

    double base, height;
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    Shape triangle(base, height, true);
    cout << "Area of triangle: " << triangle.getArea() << endl;
    return 0;
}
