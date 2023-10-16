//Hello. My name is Merdan Garlyyev, and I am taking CS231 this semester. The code takes the amount of pennies, nickels, dimes, quarters, and half 
//dollars from the user. If the number is negative it gives error, so user could re-entern the right value. After all the values entered, the program
// will add it and shows us the value in dollars and cents. The due date for this project is Feb 12, 2023

#include <iostream>

using namespace std;

int main() {
    // Welcome message that greets a user
    cout << "Welcome to the Coin Calculator program!" << endl;

    // Coin variables
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int total = 0;

    // These are input and validation blocks. If value is invalid, while loop will be looping until user writes acceptable value
    while (true) {
        cout << "Enter the number of pennies: ";
        cin >> pennies;
        if (pennies < 0) {
            cout << "Error: The number of pennies cannot be negative. Try once again." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Enter the number of nickels: ";
        cin >> nickels;
        if (nickels < 0) {
            cout << "Error: The number of nickels cannot be negative. Try once again." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Enter the number of dimes: ";
        cin >> dimes;
        if (dimes < 0) {
            cout << "Error: The number of dimes cannot be negative. Try once again." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Enter the number of quarters: ";
        cin >> quarters;
        if (quarters < 0) {
            std::cout << "Error: The number of quarters cannot be negative. Try once again." << endl;
            continue;
        }
        break;
    }

    while (true) {
        cout << "Enter the number of half dollars: ";
        cin >> half_dollars;
        if (half_dollars < 0) {
            cout << "Error: The number of half dollars cannot be negative. Please try again." << endl;
            continue;
        }
        break;
    }

    // Calculate total
    total = pennies + nickels * 5 + dimes * 10 + quarters * 25 + half_dollars * 50;

    // Output total in dollars and cents
    cout << "The total change is $" << total / 100 << ".";
    if (total % 100 < 10) {
        cout << "0" << total % 100 << endl;
    } else {
        cout << total % 100 << endl;
    }

    return 0;
}

