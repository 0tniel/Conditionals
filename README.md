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

<br>
<br>
<p align="center">Experiment 5c</p>
<br>

## Aim
To develop a C++ program that calculates the total and average marks of five subjects and assigns a grade based on the average score.

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
<br>
This program calculates the total and average marks for five subjects entered by the user and then assigns a grade based on the average score using a series of conditional statements. The if-else if-else ladder evaluates the average marks against specified thresholds to determine the corresponding grade, such as "A" for averages greater than 90, "B+" for averages greater than 80, and so on. This approach allows for straightforward classification of performance into distinct categories, providing an easy way to assess the user's overall academic achievement based on their input.

## Algorithm 
Step 1: Start
<br>
Step 2: Declare Variables maths, physics, chemistry, english, computer, total, avg.
<br>
Step 3: Input maths, physics, chemistry, english, computer marks.
<br>
Step 4: Calculate Total (total = maths + physics + chemistry + english + computer)
<br>
Step 5: Calculate Average (avg = total / 5)
<br>
Step 6: Display total marks
<br>
Step 7: Display avg marks
<br>
Step 8: Determine Grade
<br>
If avg > 90, then grade is "A".
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else if avg > 80, then grade is "B+"
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else if avg > 70, then grade is "B".
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else if avg > 60, then grade is "C+
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else if avg > 50, then grade is "C"
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else if avg > 40, then grade is "P"
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else grade is "F"
<br>
Step 9: Display grade
<br>
Step 10: End
<br>

## Code
```cpp

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
```

## Output

![image](https://github.com/user-attachments/assets/0f9f163b-e336-4766-9e8c-cf741f6a3656)

## Conclusion
This Grade Calculator program effectively computes the total and average marks for five subjects and assigns a corresponding grade based on the average score.

<br>
<br>
<p align="center">Experiment 5d</p>
<br>

## Aim
To find the greatest number of the three numbers

## Software Used
- Dev C++

## Theory
This C++ program determines the largest of three input numbers using nested if-else statements. It begins by prompting the user to input three numbers. The program then compares the first number (num1) with the second (num2) and third (num3) numbers. If num1 is greater than both num2 and num3, it is declared the largest number. Otherwise, if num2 is greater than num3, it is identified as the largest number. If neither of these conditions is met, num3 is determined to be the largest number. This method effectively evaluates the relative sizes of the three numbers by making direct comparisons and ensures accurate results.
<br>
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

## Algorithm

Step 1: Start
<br>
Step 2: Declare variables num1, num2, and num3.
<br>
Step 3: Input num1,num2,num3.
<br>
Step 4: Compare the three numbers to find the largest:
<br>
If num1 is greater than num2:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If num1 is greater than num3, then num1 is the largest.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else, num3 is the largest.
<br>
Else:
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;If num2 is greater than num3, then num2 is the largest.
<br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Else, num3 is the largest.
<br>
Step 7: Display the largest number.
<br>
Step 8: End
<br>

## Code

```cpp
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
```

## Output

![image](https://github.com/user-attachments/assets/bac6a1ab-482a-4d75-8e10-8b53d1f075d6)

<br>
<br>
<p align="center"><b>Experiment 5e</b></p>
<br>

## Aim
To determine whether a number is positive or negative in C++

## Software Used
- Dev C++

## Theory

The NumberSign.cpp program is designed to determine whether a user-provided number is positive or negative. It includes the <iostream> library for input and output operations and uses the std namespace to simplify code. The program declares a float variable to hold the user’s input, prompts the user to enter a number, and reads this input using cin. It then employs an if-else statement to evaluate whether the number is less than 0, in which case it outputs that the number is negative; otherwise, it states that the number is positive. This basic program demonstrates the use of conditional statements in C++ to handle numerical comparisons.
<br>
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

## Algorithm

Step 1: Start
<br>
Step 2: Declare a variable number.
<br>
Step 3: Input a number.
<br>
Step 4: Check if the number is less than 0:
<br.
If true, display "The given number is negative."
<br>
Else, display "The given number is positive."
<br>
Step 5: End
<br>

## Code

```cpp
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
```

## Output

![image](https://github.com/user-attachments/assets/4acdc003-0419-4150-9f10-5656a0086316)

## Conclusion

Thus, we used a simple if-else statement to determine whether the given number is positive or negative.

<br>
<br>
<p align="center"><b>Experiment 5f</b></p>
<br>

## Aim
To determine whether a number is positive or negative in C++

## Software Used
- Dev C++

## Theory

Decision-making in C++ enables the execution of specific code blocks based on certain conditions. It allows programs to make decisions and perform different actions depending on the input or other factors.
<br>
The <b>if</b> Statement: The if statement evaluates a condition, and if the condition is true, it executes the block of code within the if block. If the condition is false, the code inside the if block is skipped, and the program continues to the next statement.
<br>
The <b>else</b> Statement: The else statement complements the if statement by providing an alternative block of code to execute when the condition is false. It ensures that one of two mutually exclusive code blocks is executed, based on the outcome of the condition.
<br>
<p>In the PointQuadrant.cpp program, we determine the quadrant or axis on which a point lies based on its Cartesian coordinates (x, y). The program prompts the user to input the x and y values of the point. It then uses a series of if-else statements to classify the point's location in the coordinate system. If both x and y are positive, the point is in the 1st quadrant; if x is negative and y is positive, the point is in the 2nd quadrant; if x is positive and y is negative, the point is in the 3rd quadrant; and if both x and y are negative, the point is in the 4th quadrant. Additionally, if either x or y is zero, the point is classified as being on one of the coordinate axes or at the origin if both are zero. This method allows the program to categorize the point’s position within the Cartesian plane effectively.</p>

## Algorithm 

Step 1: Start
<br>
Step 2: Declare variables x and y.
<br>
Step 3: Input x.
<br>
Step 4: Input y.
<br>
Step 5: Determine the location of the point based on the values of x and y:
<br>
If x is greater than 0 and y is greater than 0:
<br>
Display "The point is in the 1st quadrant."
<br>
Else if x is less than 0 and y is greater than 0:
<br>
Display The point is in the 2nd quadrant."
<br>
Else if x is greater than 0 and y is less than 0:
<br>
Display"The point is in the 3rd quadrant."
<br>
Else if x is less than 0 and y is less than 0:
<br>
Display "The point is in the 4th quadrant."
<br>
Else if x is equal to 0 and y is equal to 0:
<br>
Display "The point is on the origin."
<br>
Else if x is equal to 0:
<br>
Display "The point is on the y-axis."
<br>
Else if y is equal to 0:
<br>
Display "The point is on the x-axis."
<br>

## Code 

```cpp
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

```

## Output

![image](https://github.com/user-attachments/assets/59a50d84-194d-4c03-964c-b91c61bda2ce)

## Conclusion

Thus we have learned about if else condition


