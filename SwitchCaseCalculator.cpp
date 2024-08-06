// Name: Otniel Jhirad
// PRN: 23070123069
#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "Simple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Division" << endl;
    cout << "4. Multiplication" << endl;
    cout << "Enter the operation (1-4): ";
    cin >> choice;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
        case 4:
            cout << "Result: " << num1 * num2 << endl;
            break;
        default:
            cout << "Invalid operation. Please choose a number between 1 and 4." << endl;
            break;
    }

    return 0;
}

/* Example Output:
Simple Calculator
1. Addition
2. Subtraction
3. Division
4. Multiplication
Enter the operation (1-4): 1
Enter the first number: 3
Enter the second number: 4
Result: 7
*/

