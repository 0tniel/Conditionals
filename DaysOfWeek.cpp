// Name: Otniel Jhirad
// PRN: 23070123069
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Choose a Day of the Week:" << endl;
    cout << "1. Monday" << endl;
    cout << "2. Tuesday" << endl;
    cout << "3. Wednesday" << endl;
    cout << "4. Thursday" << endl;
    cout << "5. Friday" << endl;
    cout << "6. Saturday" << endl;
    cout << "7. Sunday" << endl;
    cout << "Enter a number (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected: Monday." << endl;
            break;
        case 2:
            cout << "You selected: Tuesday." << endl;
            break;
        case 3:
            cout << "You selected: Wednesday." << endl;
            break;
        case 4:
            cout << "You selected: Thursday." << endl;
            break;
        case 5:
            cout << "You selected: Friday." << endl;
            break;
        case 6:
            cout << "You selected: Saturday." << endl;
            break;
        case 7:
            cout << "You selected: Sunday." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            break;
    }

    return 0;
}

/* Example Output:
Choose a Day of the Week:
1. Monday
2. Tuesday
3. Wednesday
4. Thursday
5. Friday
6. Saturday
7. Sunday
Enter a number (1-7): 1
You selected: Monday.
*/

