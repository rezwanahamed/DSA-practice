#include <iostream>
using namespace std;

class Solution
{
public:
    double areaCalculator(double height, double width) // area of rectangle
    {
        return 0.5 * height * width;
    }

    double areaCalculator(double height, double width, bool isTriangle) // area of triangle
    {
        return height * width;
    }

    double areaCalculator(double radius) // area of circle
    {
        return 3.1416 * radius * radius;
    }
};

int main()
{
    Solution obj1;
    cout << "Area of triangle: " << obj1.areaCalculator(2.3, 4.2) << endl;
    cout << "Area of rectangle: " << obj1.areaCalculator(2, 2, true) << endl;
    cout << "Area of circle: " << obj1.areaCalculator(2.3) << endl;

    return 0;
}
