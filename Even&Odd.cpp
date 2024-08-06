// Name: Otniel
// PRN: 23070123069
#include <iostream>
using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}

/* Example Output:
Enter a number: 7
7 is an odd number.
*/

