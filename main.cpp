#include <iostream>
#include "UserManager.h"
using namespace std;

int main() {
    UserManager userManager;
    int choice;
    string username, password, phone, gender;
    float weight;

    while (true) {
        cout << "\n=== User Management System ===" << endl;
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            cout << "Enter phone number: ";
            cin >> phone;
            cout << "Enter weight (in kg): ";
            cin >> weight;
            cout << "Enter gender (male, female, other): ";
            cin >> gender;
            userManager.registerUser(username, password, phone, weight, gender);
            break;

        case 2:
            cout << "Enter username: "<< endl;
            cin >> username;
            cout << "Enter password: "<< endl;
            cin >> password;

            userManager.login(username, password);
            break;
            cout << "welcome back"<< endl;

        case 3:
            cout << "Exiting the application. Goodbye!" << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
