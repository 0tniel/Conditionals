// NumberSign.cpp
//Otniel Jhirad
//23070123069
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    float number;
    cout << "Enter a number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "The given number is negative" << endl;
    } else {
        cout << "The given number is positive" << endl;
    }
    
    return 0;
}
/*
Output
Enter a number: -23
The given number is negative
*/
