#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    //user input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // if_else
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num2 << " is greater than " << num1 << endl;
    } else {
        cout << "Both numbers are equal (" << num1 << ")" << endl;
    }

    return 0;
}