// PointQuadrant.cpp
//Otniel Jhirad
//23070123069
//ENTC A3
#include <iostream>
using namespace std;
int main() {
    float x, y;
    cout << "Enter x value: ";
    cin >> x;
    cout << "Enter y value: ";
    cin >> y;
    
    if (x > 0 && y > 0) {
        cout << "The point is in the 1st quadrant" << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in the 2nd quadrant" << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in the 3rd quadrant" << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in the 4th quadrant" << endl;
    } else if (x == 0 && y == 0) {
        cout << "The point is on the origin" << endl;
    } else if (x == 0) {
        cout << "The point is on the y-axis" << endl;
    } else if (y == 0) {
        cout << "The point is on the x-axis" << endl;
    }
    
    return 0;
}

