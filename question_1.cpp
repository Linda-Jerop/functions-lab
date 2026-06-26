// QUESTION 1
// Write a complete interactive C++ program that contains a user-defined function named
// calculateCube. This function must accept a double parameter and return its mathematical
// cube as a double. In your main() function, prompt the user to input a number, pass it to
// your function, and print the returned result to the console.

#include <iostream>
using namespace std;

double calculateCube(double num) {
    return num * num * num;
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double result = calculateCube(number);
    cout << "The cube of " << number << " is " << result << endl;
    return 0;
}