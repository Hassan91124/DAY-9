#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers to find their GCD: ";
    cin >> a >> b;

    do {
        int remainder = a % b;
        a = b;
        b = remainder;
    } while (b != 0);

    cout << "The GCD is: " << a << endl;
    return 0;
}
