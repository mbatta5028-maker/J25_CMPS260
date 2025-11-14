//
//  main.cpp
//  Tech Invoice
//
//  Created by Mia Battaglia on 11/13/25.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << "****** Welcome to the Tech Store Invoice Calculator ******" << endl;

    string name;
    int quantity;
    double price;
    char member;

    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of items: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price;

    cout << "Are you a store member (Y/N)? ";
    cin >> member;

    double subtotal = price * quantity;

    double discountRate = 0.0;

    // Base discount
    if (subtotal > 500) {
        discountRate = 0.10;
    } else if (subtotal > 300) {
        discountRate = 0.05;
    }

    double afterBaseDiscount = subtotal - (subtotal * discountRate);

    // Membership discount
    double memberDiscount = 0.0;
    if (member == 'Y' || member == 'y') {
        memberDiscount = 0.05;
    }

    double finalTotal = afterBaseDiscount - (afterBaseDiscount * memberDiscount);

    // Output
    cout << fixed << showpoint << setprecision(2);
    cout << "============== PURCHASE INVOICE ==============" << endl;
    cout << left << setw(30) << setfill('.') << "Customer Name:" << name << endl;
    cout << left << setw(30) << "Items Purchased:" << quantity << endl;
    cout << left << setw(30) << "Price per Item:" << "$" << price << endl;
    cout << left << setw(30) << "Subtotal:" << "$" << subtotal << endl;

    if (discountRate > 0)
        cout << "Discount Applied: " << (discountRate * 100) << "%" << endl;
    else
        cout << "Discount Applied: 0%" << endl;

    if (memberDiscount > 0)
        cout << "Membership Discount: 5%" << endl;
    else
        cout << "Membership Discount: None" << endl;

    cout << "---------------------------------------------" << endl;
    cout << left << setw(30) << "Final Total:" << "$" << finalTotal << endl;
    cout << "=============================================" << endl;
    cout << "Thank you for shopping with us!" << endl;

    return 0;
}
