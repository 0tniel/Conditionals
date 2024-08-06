// Name: Otniel Jhirad
// PRN: 23070123069
#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || 
        character == 'o' || character == 'u' || character == 'A' || 
        character == 'E' || character == 'I' || character == 'O' || 
        character == 'U') {
        cout << character << " is a vowel." << endl;
    } else {
        cout << character << " is a consonant." << endl;
    }

    return 0;
}

/* Example Output:
Enter a character: o
o is a vowel.
*/

