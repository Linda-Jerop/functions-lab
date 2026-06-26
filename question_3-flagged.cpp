// QUESTION 3
// Write an interactive C++ program featuring a user-defined function named isLeapYear.
// The function should accept an integer representing a year and return a boolean data type
// (true if it is a leap year, and false otherwise). In main(), use the boolean value returned
// by the function within an if...else statement to output whether the user’s year is a leap
// year or not.

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if ((year % 4 == 0) || (year % 400 == 0)){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    bool leapYear = isLeapYear(year);
    if (leapYear) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}