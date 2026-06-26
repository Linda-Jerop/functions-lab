// QUESTION 5
// Write a Python program containing a user-defined function named compute_discount. The
// function should take two parameters: price and discount rate. Assign a default value of
// 0.10 (10%) to the discount rate parameter. The function must calculate and return the
// final discounted price. Call the function twice in your main script: once using only the price
// to trigger the default discount, and once explicitly passing a custom discount rate.

#include <iostream>
using namespace std;    

double compute_discount(double price, double discount_rate = 0.10) {
    return price - (price * discount_rate);
}

int main() {
    double price, custom_discount_rate;

    cout << "Enter the price: ";
    cin >> price;

    cout << "Enter the custom discount rate (e.g., 0.15 for 15%): ";
    cin >> custom_discount_rate;

    double final_price_default = compute_discount(price);
    double final_price_custom = compute_discount(price, custom_discount_rate);

    cout << "Final price with default discount: $" << final_price_default << endl;
    cout << "Final price with custom discount: $" << final_price_custom << endl;

    return 0;
}