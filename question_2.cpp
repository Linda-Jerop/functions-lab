// QUESTION 2
// Write a C++ program that calculates simple interest using a value-returning function. Create a function named 
//getSimpleInterest that takes three double parameters: principal,
// rate, and time. The function must calculate and return the final interest amount. Call
// this function from main() using interactively captured user inputs and output the returned
// value.

#include <iostream>
using namespace std;

double getSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;
    double interest = getSimpleInterest(principal, rate, time);
    cout << "The simple interest is: " << interest << endl;
    return 0;
}