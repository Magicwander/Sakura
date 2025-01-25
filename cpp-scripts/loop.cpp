/*
Title: Comprehensive C++ For Loop Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- For Loop
*/

#include <iostream>

// Basic for loop to print numbers from 1 to 10
int main() {
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 01
For Loop Basics
*/

int main() {
    // For Loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 02
For Loop with Step Size
*/

int main() {
    // For Loop to print even numbers from 2 to 10
    for (int i = 2; i <= 10; i += 2) {
        std::cout << "Even Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 03
Nested For Loops
*/

int main() {
    // Nested For Loop to print a multiplication table
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

/*
Problem statement 04
For Loop with Break Statement
*/

int main() {
    // For Loop with Break Statement
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            break;
        }
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 05
For Loop with Continue Statement
*/

int main() {
    // For Loop with Continue Statement
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << "Odd Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 06
For Loop with Multiple Variables
*/

int main() {
    // For Loop with Multiple Variables
    for (int i = 0, j = 10; i <= 10; ++i, --j) {
        std::cout << "i: " << i << ", j: " << j << std::endl;
    }
    return 0;
}

/*
Problem statement 07
For Loop with Array
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // For Loop to print array elements
    for (int i = 0; i < 5; ++i) {
        std::cout << "Array Element: " << arr[i] << std::endl;
    }
    return 0;
}

/*
Problem statement 08
For Loop with String
*/

int main() {
    std::string str = "Hello";
    // For Loop to print characters of a string
    for (char c : str) {
        std::cout << "Character: " << c << std::endl;
    }
    return 0;
}

/*
Problem statement 09
For Loop with Range-based for Loop
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // Range-based for Loop to print array elements
    for (int elem : arr) {
        std::cout << "Array Element: " << elem << std::endl;
    }
    return 0;
}

/*
Problem statement 10
For Loop with Reverse Iteration
*/

int main() {
    // For Loop to print numbers from 10 to 1
    for (int i = 10; i >= 1; --i) {
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 11
For Loop with Conditional Increment
*/

int main() {
    // For Loop with Conditional Increment
    for (int i = 1; i <= 10; i += (i % 2 == 0 ? 2 : 1)) {
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 12
For Loop with Infinite Loop
*/

int main() {
    // Infinite For Loop
    for (;;) {
        std::cout << "This will run forever!" << std::endl;
        break; // Adding break to avoid actual infinite loop
    }
    return 0;
}

/*
Problem statement 13
For Loop with Complex Condition
*/

int main() {
    // For Loop with Complex Condition
    for (int i = 1; i <= 10 && i % 2 == 0; ++i) {
        std::cout << "Even Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 14
For Loop with Multiple Conditions
*/

int main() {
    // For Loop with Multiple Conditions
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0 && i % 3 == 0) {
            std::cout << "Number divisible by 2 and 3: " << i << std::endl;
        }
    }
    return 0;
}

/*
Problem statement 15
For Loop with Nested Conditions
*/

int main() {
    // For Loop with Nested Conditions
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            if (i % 3 == 0) {
                std::cout << "Number divisible by 2 and 3: " << i << std::endl;
            }
        }
    }
    return 0;
}

/*
Problem statement 16
For Loop with Early Exit
*/

int main() {
    // For Loop with Early Exit
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            std::cout << "Early Exit at i = 5" << std::endl;
            break;
        }
        std::cout << "Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 17
For Loop with Skipping Iterations
*/

int main() {
    // For Loop with Skipping Iterations
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            continue;
        }
        std::cout << "Odd Number: " << i << std::endl;
    }
    return 0;
}

/*
Problem statement 18
For Loop with Sum Calculation
*/

int main() {
    int sum = 0;
    // For Loop to calculate the sum of numbers from 1 to 10
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

