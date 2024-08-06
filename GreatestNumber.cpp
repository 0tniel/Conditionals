// Name: Otniel
// PRN: 23070123069
#include <iostream>
using namespace std;

int main() {
    int num1,num2,num3;
    
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    if (num1 > num2) {
        if (num1 > num3) {
            cout << num1 << " is the largest number." << endl;
        } else {
            cout << num3 << " is the largest number." << endl;
        }
    } else {
        if (num2 > num3) {
            cout << num2 << " is the largest number." << endl;
        } else {
            cout << num3 << " is the largest number." << endl;
        }
    }

    return 0;
}

/* Example Output:
Enter number 1: 30
Enter number 2: 69
Enter number 3: 23
69 is the largest number.
*/

