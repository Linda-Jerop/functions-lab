// QUESTION 4
// Write a C++ program that demonstrates function overloading using only value-returning
// functions. Create two distinct versions of a function named getArea. The first version
// should take a single double parameter (representing the radius of a circle) and return its
// area. The second version should take two double parameters (representing the length and
// 1
// width of a rectangle) and return its area. Call both functions from main() and display their
// returned values.

#include <iostream>
using namespace std;

double getArea(double radius) {
    return 3.14159 * radius * radius; // Area of circle = π * r^2
}

double getArea(double length, double width) {
    return length * width; // Area of rectangle = length * width
}

int main() {
    double circleRadius, rectangleLength, rectangleWidth;

    cout << "Enter the radius of the circle: ";
    cin >> circleRadius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> rectangleLength >> rectangleWidth;

    double circleArea = getArea(circleRadius);
    double rectangleArea = getArea(rectangleLength, rectangleWidth);

    cout << "Area of the circle: " << circleArea << endl;
    cout << "Area of the rectangle: " << rectangleArea << endl;

    return 0;
}