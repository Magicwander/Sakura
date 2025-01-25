/*
Title: Comprehensive C++ Functions Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- Function Declaration and Definition
- Function Parameters and Return Types
- Function Overloading
- Default Arguments
- Inline Functions
- Recursive Functions
- Function Pointers
- Lambda Functions
- Standard Library Functions
- User-Defined Functions
- Functions with Arrays
- Functions with Pointers
- Functions with Structures
- Functions with Classes
- Functions with Templates
- Functions with Exceptions
- Functions with File I/O
- Functions with Multi-threading
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <thread>
#include <stdexcept>
#include <algorithm>
#include <cmath>

// Function Declaration and Definition
int add(int a, int b);

int main() {
    int result = add(5, 3);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// Function Parameters and Return Types
double multiply(double a, double b);

int main() {
    double result = multiply(2.5, 4.0);
    std::cout << "Product: " << result << std::endl;
    return 0;
}

double multiply(double a, double b) {
    return a * b;
}

// Function Overloading
int add(int a, int b, int c);

int main() {
    int result = add(2, 3, 4);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

int add(int a, int b, int c) {
    return a + b + c;
}

// Default Arguments
int add(int a, int b = 0, int c = 0);

int main() {
    int result = add(2);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

int add(int a, int b, int c) {
    return a + b + c;
}

// Inline Functions
inline int square(int a);

int main() {
    int result = square(4);
    std::cout << "Square: " << result << std::endl;
    return 0;
}

inline int square(int a) {
    return a * a;
}

// Recursive Functions
int factorial(int n);

int main() {
    int result = factorial(5);
    std::cout << "Factorial: " << result << std::endl;
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function Pointers
int add(int a, int b);

int main() {
    int (*funcPtr)(int, int) = add;
    int result = funcPtr(5, 3);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

// Lambda Functions
int main() {
    auto add = [](int a, int b) { return a + b; };
    int result = add(5, 3);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

// Standard Library Functions
int main() {
    std::string str = "Hello, World!";
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << str << std::endl;
    return 0;
}

// User-Defined Functions
void greet(const std::string& name);

int main() {
    greet("Alice");
    return 0;
}

void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

// Functions with Arrays
void printArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Functions with Pointers
void printValue(int* ptr);

int main() {
    int value = 10;
    printValue(&value);
    return 0;
}

void printValue(int* ptr) {
    std::cout << "Value: " << *ptr << std::endl;
}

// Functions with Structures
struct Point {
    int x, y;
};

void printPoint(const Point& p);

int main() {
    Point p1 = {1, 2};
    printPoint(p1);
    return 0;
}

void printPoint(const Point& p) {
    std::cout << "Point: (" << p.x << ", " << p.y << ")" << std::endl;
}

// Functions with Classes
class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() const;
};

int main() {
    Rectangle r(10, 5);
    std::cout << "Area: " << r.area() << std::endl;
    return 0;
}

int Rectangle::area() const {
    return width * height;
}

// Functions with Templates
template <typename T>
T add(T a, T b);

int main() {
    int result = add(5, 3);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

template <typename T>
T add(T a, T b) {
    return a + b;
}

// Functions with Exceptions
void divide(int a, int b);

int main() {
    try {
        divide(10, 0);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}

void divide(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    std::cout << "Result: " << (a / b) << std::endl;
}

// Functions with File I/O
void writeToFile(const std::string& filename, const std::string& content);

int main() {
    writeToFile("output.txt", "Hello, World!");
    return 0;
}

void writeToFile(const std::string& filename, const std::string& content) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        outFile << content << std::endl;
        outFile.close();
    } else {
        std::cout << "Failed to open file" << std::endl;
    }
}

