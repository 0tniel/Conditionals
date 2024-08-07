# Conditionals

This repository features beginner C++ programs: Days of the Week uses a switch for day display, Grade Calculation determines grades from scores, Greatest Number finds the largest of three, Odd or Even checks number parity, Positive or Negative classifies numbers, Quadrant Check identifies point quadrants, and Vowel Checker checks vowels.
<br>
<br>
<p align="center">Experiment 5a</p>
<br>

## Aim
To create a C++ program that uses a switch case to display the day of the week based on a number input from the user.

## Software Used
- Dev C++

## Theory
The switch statement in C++ is a flow control mechanism used to execute different blocks of code based on the value of a given expression. It serves as an alternative to the long if-else-if ladder, providing a structured way to dispatch execution to various parts of the code depending on the expression's value.
<br>

### Syntax of Switch Statement in C++:

```cpp
switch (expression) {
    case value_1:
        // statements_1;
        break;
    case value_2:
        // statements_2;
        break;
    ...
    ...
    default:
        // default_statements;
        break;
}
```

## Algorithm

Step 1: Start
<br>
Step 2: Declare an integer variable choice to store user input
<br>
Step 3: Display Menu
<br>
Step 4: Input choice
<br>
Step 5: Evaluate Choice with Switch Statement
<br>
Case 1: If the choice is 1, display "You selected: Monday."
<br>
Case 2: If the choice is 2, display "You selected: Tuesday."
<br>
Case 3: If the choice is 3, display "You selected: Wednesday."
<br>
Case 4: If the choice is 4, display "You selected: Thursday."
<br>
Case 5: If the choice is 5, display "You selected: Friday."
<br>
Case 6: If the choice is 6, display "You selected: Saturday."
<br>
Case 7: If the choice is 7, display "You selected: Sunday."
<br>
Default: If the choice does not match any of the cases (i.e., not between 1 and 7), print "Invalid choice. Please enter a number between 1 and 7.
<br>
Step 6: End

## Code
```cpp
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
```

## Output


![image](https://github.com/user-attachments/assets/4461d21c-c18d-463a-8362-db20ef342edc)

## Conclusion

The C++ program effectively utilizes a switch case to map numeric user input to the corresponding day of the week

<br>
<br>
<p align="center">Experiment 5b</p>
<br>

## Aim
To develop a C++ program that determines and displays whether a given number is odd or even based on user input.

## Software Used
- Dev C++

## Theory
Decision-making in C++ enables the execution of specific code blocks based on certain conditions. It allows programs to make decisions and perform different actions depending on the input or other factors.
<br>
The <b>if</b> Statement: The if statement evaluates a condition, and if the condition is true, it executes the block of code within the if block. If the condition is false, the code inside the if block is skipped, and the program continues to the next statement.
<br>
The <b>else</b> Statement: The else statement complements the if statement by providing an alternative block of code to execute when the condition is false. It ensures that one of two mutually exclusive code blocks is executed, based on the outcome of the condition.
<br>

### Syntax
```cpp
if (condition) {
    // Executes this block if condition is true
} else {
    // Executes this block if condition is false
}
```

### Working Of the if-else Statement
1) Control Flow: The program flow enters the if statement block.<br>
2) Condition Testing: The condition specified in the if statement is evaluated. <br>
3) True Condition: If the condition is evaluated as true, the code inside the if block is executed. <br>
4) False Condition: If the condition evaluates to false, the control flow skips the if block and moves to the else block. <br>
5) Execution: The else block's code is executed if the condition is false. <br>
6) Exit: After executing the appropriate code, the program exits the if-else block. <br>

## Algorithm

Algorithm
Step 1: Start
<br>
Step 2: Declare variable number (to store the user input)
<br>
Step 3: Input Number
<br>
Step 4: If number % 2 == 0
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Display number is even
<br>
else
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Display number is odd
<br>
Step 5: End
<br>

## Code
```cpp
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
```

## Output

![image](https://github.com/user-attachments/assets/5ee19769-9683-4b01-b29d-814ba48742de)

## Conclusion 
The C++ program effectively determines whether a given number is even or odd

