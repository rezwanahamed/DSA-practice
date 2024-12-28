//write a c++ program to calculate the area of triangle, rectangle and circle using concept of function overloading
#include <iostream>
#include <cmath> // For M_PI constant (value of pi)
using namespace std;

class AreaCalculator {
public:
    // Function to calculate area of a triangle
    double calculateArea(double base, double height) {
        return 0.5 * base * height;
    }

    // Function to calculate area of a rectangle
    double calculateArea(double length, double width, bool isRectangle) {
        return length * width;
    }

    // Function to calculate area of a circle
    double calculateArea(double radius) {
        return M_PI * radius * radius;
    }
};

int main() {
    AreaCalculator areaCalc;

    // Calculate area of triangle
    double triangleBase = 10.0, triangleHeight = 5.0;
    cout << "Area of Triangle: " << areaCalc.calculateArea(triangleBase, triangleHeight) << " square units" << endl;

    // Calculate area of rectangle
    double rectangleLength = 12.0, rectangleWidth = 8.0;
    cout << "Area of Rectangle: " << areaCalc.calculateArea(rectangleLength, rectangleWidth, true) << " square units" << endl;

    // Calculate area of circle
    double circleRadius = 7.0;
    cout << "Area of Circle: " << areaCalc.calculateArea(circleRadius) << " square units" << endl;

    return 0;
}
