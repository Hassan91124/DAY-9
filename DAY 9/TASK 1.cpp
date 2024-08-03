#include <iostream>

using namespace std;

int main() {
    int number = 1;

    cout << "Even numbers between 1 and 20 are: ";
    while (number <= 20) {
        if (number % 2 == 0) {
            cout << number << " ";
        }
        number++;
    }

    cout << endl;
    return 0;
}
