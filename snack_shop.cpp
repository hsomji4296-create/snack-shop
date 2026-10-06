#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    int quantity;
    string snackName;
    double price;

    cout << "Welcome to the Smart Snack Shop!" << endl << endl;
    cout << "Choose a snack:" << endl;
    cout << "1. Chips   ($1.50)" << endl;
    cout << "2. Cookies ($2.50)" << endl;
    cout << "3. Soda    ($2.00)" << endl;
    cout << "4. Candy   ($1.25)" << endl << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;
    cout << "Enter quantity: ";
    cin >> quantity;

    // Compound condition: stop if the choice or quantity is not valid
    if (choice < 1 || choice > 4 || quantity < 1) {
        cout << "Invalid input. Please run the program again." << endl;
        return 1;
    }

    // Decide the snack and price
    if (choice == 1) {
        snackName = "Chips";
        price = 1.50;
    } else if (choice == 2) {
        snackName = "Cookies";
        price = 2.50;
    } else if (choice == 3) {
        snackName = "Soda";
        price = 2.00;
    } else {
        snackName = "Candy";
        price = 1.25;
    }

    // Calculate the cost, with a 10% discount for 5 or more items
    double subtotal = price * quantity;
    double discount = 0.0;
    if (quantity >= 5) {
        discount = subtotal * 0.10;
    }
    double total = subtotal - discount;

    cout << fixed << setprecision(2);
    cout << endl << "--- Order Summary ---" << endl << endl;
    cout << "Snack: " << snackName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Discount: -$" << discount << endl;
    cout << "Total Cost: $" << total << endl;

    return 0;
}
