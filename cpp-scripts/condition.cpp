/*
Title: Comprehensive C++ Conditional Statements Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- If Statement
- If-Else Statement
- If-Else If Statement
- Nested If Statements
- Switch Statement
- Ternary Operator
- Conditional Operator with Functions
- Conditional Operator with Loops
- Conditional Operator with Arrays
- Conditional Operator with Strings
- Conditional Operator with Pointers
- Conditional Operator with Structures
- Conditional Operator with Classes
- Conditional Operator with Exceptions
- Conditional Operator with File I/O
- Conditional Operator with Multi-threading
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include <stdexcept>

// If Statement Example
int main() {
    int number = 10;
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    }
    return 0;
}

// If-Else Statement Example
int main() {
    int number = -5;
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is not positive." << std::endl;
    }
    return 0;
}

// If-Else If Statement Example
int main() {
    int number = 0;
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }
    return 0;
}

// Nested If Statements Example
int main() {
    int number = 10;
    if (number > 0) {
        if (number % 2 == 0) {
            std::cout << "The number is positive and even." << std::endl;
        } else {
            std::cout << "The number is positive and odd." << std::endl;
        }
    } else {
        std::cout << "The number is not positive." << std::endl;
    }
    return 0;
}

// Switch Statement Example
int main() {
    int day = 3;
    switch (day) {
        case 1:
            std::cout << "Monday" << std::endl;
            break;
        case 2:
            std::cout << "Tuesday" << std::endl;
            break;
        case 3:
            std::cout << "Wednesday" << std::endl;
            break;
        default:
            std::cout << "Other day" << std::endl;
    }
    return 0;
}

// Ternary Operator Example
int main() {
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    std::cout << "Maximum value: " << max << std::endl;
    return 0;
}

// Conditional Operator with Functions Example
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 5, b = 10;
    std::cout << "Maximum value: " << max(a, b) << std::endl;
    return 0;
}

// Conditional Operator with Loops Example
int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << ((i % 2 == 0) ? "Even" : "Odd") << std::endl;
    }
    return 0;
}

// Conditional Operator with Arrays Example
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        std::cout << ((arr[i] % 2 == 0) ? "Even" : "Odd") << std::endl;
    }
    return 0;
}

// Conditional Operator with Strings Example
int main() {
    std::string str = "Hello";
    std::cout << (str.empty() ? "Empty" : "Not Empty") << std::endl;
    return 0;
}

// Conditional Operator with Pointers Example
int main() {
    int* ptr = nullptr;
    std::cout << (ptr ? "Not Null" : "Null") << std::endl;
    return 0;
}

// Conditional Operator with Structures Example
struct Point {
    int x, y;
};

int main() {
    Point p1 = {1, 2};
    Point p2 = {3, 4};
    Point maxPoint = (p1.x > p2.x) ? p1 : p2;
    std::cout << "Max Point: (" << maxPoint.x << ", " << maxPoint.y << ")" << std::endl;
    return 0;
}

// Conditional Operator with Classes Example
class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
};

int main() {
    Rectangle r1(10, 5);
    Rectangle r2(8, 6);
    Rectangle maxRect = (r1.width * r1.height > r2.width * r2.height) ? r1 : r2;
    std::cout << "Max Rectangle: Width = " << maxRect.width << ", Height = " << maxRect.height << std::endl;
    return 0;
}

// Conditional Operator with Exceptions Example
int main() {
    try {
        int number = 10;
        if (number == 0) {
            throw std::runtime_error("Division by zero");
        }
        std::cout << "No exception" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

// Conditional Operator with File I/O Example
int main() {
    std::ifstream file("example.txt");
    if (file.is_open()) {
        std::cout << "File opened successfully" << std::endl;
        file.close();
    } else {
        std::cout << "Failed to open file" << std::endl;
    }
    return 0;
}

// Conditional Operator with Multi-threading Example
void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::thread t1(printMessage, "Hello from thread 1");
    std::thread t2(printMessage, "Hello from thread 2");
    if (t1.joinable()) {
        t1.join();
    }
    if (t2.joinable()) {
        t2.join();
    }
    return 0;
}

// Additional Conditional Examples
int main() {
    int number = 15;
    if (number > 10 && number < 20) {
        std::cout << "Number is between 10 and 20" << std::endl;
    }
    return 0;
}

int main() {
    int number = 25;
    if (number > 20 || number < 10) {
        std::cout << "Number is either greater than 20 or less than 10" << std::endl;
    }
    return 0;
}

int main() {
    int number = 10;
    if (!(number > 20)) {
        std::cout << "Number is not greater than 20" << std::endl;
    }
    return 0;
}

int main() {
    int number = 15;
    if (number > 10) {
        if (number < 20) {
            std::cout << "Number is between 10 and 20" << std::endl;
        }
    }
    return 0;
}

int main() {
    int number = 25;
    if (number > 10) {
        std::cout << "Number is greater than 10" << std::endl;
    } else {
        std::cout << "Number is not greater than 10" << std::endl;
    }
    return 0;
}

int main() {
    int number = 5;
    if (number > 10) {
        std::cout << "Number is greater than 10" << std::endl;
    } else if (number > 5) {
        std::cout << "Number is greater than 5 but less than or equal to 10" << std::endl;
    } else {
        std::cout << "Number is 5 or less" << std::endl;
    }
    return 0;
}

int main() {
    int number = 15;
    switch (number) {
        case 10:
            std::cout << "Number is 10" << std::endl;
            break;
        case 15:
            std::cout << "Number is 15" << std::endl;
            break;
        default:
            std::cout << "Number is not 10 or 15" << std::endl;
    }
    return 0;
}

