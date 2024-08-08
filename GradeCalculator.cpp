// GradeCalculator.cpp
//Otniel Jhirad
//23070123069
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    float maths, physics, chemistry, english, computer, total, avg;
    
    cout << "Enter maths marks: ";
    cin >> maths;
    cout << "Enter physics marks: ";
    cin >> physics;
    cout << "Enter chemistry marks: ";
    cin >> chemistry;
    cout << "Enter english marks: ";
    cin >> english;
    cout << "Enter computer marks: ";
    cin >> computer;
    
    total = maths + physics + chemistry + english + computer;
    avg = total / 5;
    
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << avg << endl;

    if (avg > 90) {
        cout << "Grade: A" << endl;
    } else if (avg > 80) {
        cout << "Grade: B+" << endl;
    } else if (avg > 70) {
        cout << "Grade: B" << endl;
    } else if (avg > 60) {
        cout << "Grade: C+" << endl;
    } else if (avg > 50) {
        cout << "Grade: C" << endl;
    } else if (avg > 40) {
        cout << "Grade: P" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}
/*
Enter maths marks: 49
Enter physics marks: 90
Enter chemistry marks: 56
Enter english marks: 66
Enter computer marks: 98
Total marks: 359
Average marks: 71.8
Grade: B
*/
