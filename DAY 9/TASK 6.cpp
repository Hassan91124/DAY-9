#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    const string correctPassword = "password123";

    do {
        cout << "Enter the password: ";
        cin >> password;

        if (password != correctPassword) {
            cout << "Incorrect password. Try again." << endl;
        }
    } while (password != correctPassword);

    cout << "Access granted!" << endl;
    return 0;
}
