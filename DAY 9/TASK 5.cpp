#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;
    int i = 2;

    while (i <= n / 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }

    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
