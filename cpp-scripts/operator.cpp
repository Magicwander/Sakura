/*
Title: Comprehensive C++ Operators Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Bitwise Operators
- Assignment Operators
- Increment and Decrement Operators
- Conditional (Ternary) Operator
- sizeof Operator
- Comma Operator
- Pointer Operators
- Member Access Operators
- Scope Resolution Operator
- Type Casting Operators
- new and delete Operators
*/

#include <iostream>
#include <cmath>

// Arithmetic Operators Example
int main() {
    int a = 10, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

// Relational Operators Example
int main() {
    int a = 10, b = 5;
    std::cout << "Equal to: " << (a == b) << std::endl;
    std::cout << "Not equal to: " << (a != b) << std::endl;
    std::cout << "Greater than: " << (a > b) << std::endl;
    std::cout << "Less than: " << (a < b) << std::endl;
    std::cout << "Greater than or equal to: " << (a >= b) << std::endl;
    std::cout << "Less than or equal to: " << (a <= b) << std::endl;
    return 0;
}

// Logical Operators Example
int main() {
    int a = 1, b = 0;
    std::cout << "Logical AND: " << (a && b) << std::endl;
    std::cout << "Logical OR: " << (a || b) << std::endl;
    std::cout << "Logical NOT: " << (!a) << std::endl;
    return 0;
}

// Bitwise Operators Example
int main() {
    int a = 5, b = 3; // 5 is 0101, 3 is 0011
    std::cout << "Bitwise AND: " << (a & b) << std::endl; // 0001
    std::cout << "Bitwise OR: " << (a | b) << std::endl; // 0111
    std::cout << "Bitwise XOR: " << (a ^ b) << std::endl; // 0110
    std::cout << "Bitwise NOT: " << (~a) << std::endl; // 1010
    std::cout << "Bitwise Left Shift: " << (a << 1) << std::endl; // 1010
    std::cout << "Bitwise Right Shift: " << (a >> 1) << std::endl; // 0010
    return 0;
}

// Assignment Operators Example
int main() {
    int a = 10, b = 5;
    a += b; // a = a + b
    std::cout << "Addition Assignment: " << a << std::endl;
    a -= b; // a = a - b
    std::cout << "Subtraction Assignment: " << a << std::endl;
    a *= b; // a = a * b
    std::cout << "Multiplication Assignment: " << a << std::endl;
    a /= b; // a = a / b
    std::cout << "Division Assignment: " << a << std::endl;
    a %= b; // a = a % b
    std::cout << "Modulus Assignment: " << a << std::endl;
    return 0;
}

// Increment and Decrement Operators Example
int main() {
    int a = 10, b = 5;
    std::cout << "Pre-increment: " << (++a) << std::endl;
    std::cout << "Post-increment: " << (a++) << std::endl;
    std::cout << "Pre-decrement: " << (--b) << std::endl;
    std::cout << "Post-decrement: " << (b--) << std::endl;
    return 0;
}

// Conditional (Ternary) Operator Example
int main() {
    int a = 10, b = 5;
    int max = (a > b) ? a : b;
    std::cout << "Maximum value: " << max << std::endl;
    return 0;
}

// sizeof Operator Example
int main() {
    int a;
    float b;
    double c;
    char d;
    std::cout << "Size of int: " << sizeof(a) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(b) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(c) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(d) << " bytes" << std::endl;
    return 0;
}

// Comma Operator Example
int main() {
    int a = 1, b = 2, c = 3;
    int result = (a, b, c); // result will be 3
    std::cout << "Result: " << result << std::endl;
    return 0;
}

// Pointer Operators Example
int main() {
    int a = 10;
    int* ptr = &a;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Address of a: " << ptr << std::endl;
    std::cout << "Value at address " << ptr << " is: " << *ptr << std::endl;
    return 0;
}

// Member Access Operators Example
struct Point {
    int x, y;
};

int main() {
    Point p1 = {1, 2};
    Point* ptr = &p1;
    std::cout << "Point: (" << ptr->x << ", " << ptr->y << ")" << std::endl;
    return 0;
}

// Scope Resolution Operator Example
namespace Example {
    int value = 10;
}

int main() {
    int value = 20;
    std::cout << "Global value: " << Example::value << std::endl;
    std::cout << "Local value: " << value << std::endl;
    return 0;
}

// Type Casting Operators Example
int main() {
    int a = 10;
    float b = 3.14;
    std::cout << "Static Cast: " << static_cast<float>(a) << std::endl;
    std::cout << "Dynamic Cast: " << dynamic_cast<int>(b) << std::endl;
    std::cout << "Const Cast: " << const_cast<const int&>(a) << std::endl;
    std::cout << "Reinterpret Cast: " << reinterpret_cast<int*>(b) << std::endl;
    return 0;
}

// new and delete Operators Example
int main() {
    int* ptr = new int(10);
    std::cout << "Value: " << *ptr << std::endl;
    delete ptr;
    return 0;
}

// Additional Arithmetic Operators Examples
int main() {
    int a = 10, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

int main() {
    int a = 15, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

int main() {
    int a = 20, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

int main() {
    int a = 25, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

int main() {
    int a = 30, b = 5;
    std::cout << "Addition: " << (a + b) << std::endl;
    std::cout << "Subtraction: " << (a - b) << std::endl;
    std::cout << "Multiplication: " << (a * b) << std::endl;
    std::cout << "Division: " << (a / b) << std::endl;
    std::cout << "Modulus: " << (a % b) << std::endl;
    return 0;
}

