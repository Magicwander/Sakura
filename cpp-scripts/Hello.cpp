/*
Title: Comprehensive C++ Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- Basic data types (int, float, double, char, bool)
- Variables declaration and initialization
- Type conversions
- Arithmetic operators
- Comparison operators
- Logical operators
- Control structures (if, else, switch)
- Loops (for, while, do-while)
- Functions
- Arrays
- Pointers
- References
- Structures
- Classes and Objects
- Inheritance
- Polymorphism
- Exception Handling
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

// Hello World Example
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

/*
Problem statement 01
Basic data types and their declarations, introduction to type modifiers, type sizes, and constants
*/

int main() {
    // Section 1: Basic Data types
    // Integer types
    int age = 25;
    short small_num = 32767;
    long large_num = 2147483647;

    // Floating point types
    float price = 99.99f; // Single precision
    double pi = 3.14159265359; // Double precision

    // Character type
    char grade = 'A'; // Single character

    // Boolean type
    bool is_active = true; // True / False

    // Section 2: Type Modifiers
    unsigned int positive_only = 4294967295; // No negative numbers
    signed int with_sign = -42;

    // Section 3: Constants
    const int MAX_SCORE = 100;

    // Section 4: Type Sizes
    std::cout << "Size of data types in bytes: " << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "float: " << sizeof(float) << std::endl;
    std::cout << "double: " << sizeof(double) << std::endl;
    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "bool: " << sizeof(bool) << std::endl;

    return 0;
}

/*
Problem statement 02
Control Structures
*/

int main() {
    int number = 10;

    // If-Else Statement
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else {
        std::cout << "The number is not positive." << std::endl;
    }

    // Switch Statement
    switch (number) {
        case 10:
            std::cout << "The number is 10." << std::endl;
            break;
        case 20:
            std::cout << "The number is 20." << std::endl;
            break;
        default:
            std::cout << "The number is not 10 or 20." << std::endl;
    }

    return 0;
}

/*
Problem statement 03
Loops
*/

int main() {
    // For Loop
    for (int i = 0; i < 5; ++i) {
        std::cout << "For Loop Iteration: " << i << std::endl;
    }

    // While Loop
    int j = 0;
    while (j < 5) {
        std::cout << "While Loop Iteration: " << j << std::endl;
        ++j;
    }

    // Do-While Loop
    int k = 0;
    do {
        std::cout << "Do-While Loop Iteration: " << k << std::endl;
        ++k;
    } while (k < 5);

    return 0;
}

/*
Problem statement 04
Functions
*/

int add(int a, int b) {
    return a + b;
}

int main() {
    int sum = add(5, 3);
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

/*
Problem statement 05
Arrays
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        std::cout << "Array Element: " << arr[i] << std::endl;
    }

    return 0;
}

/*
Problem statement 06
Pointers
*/

int main() {
    int value = 10;
    int* ptr = &value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Pointer Address: " << ptr << std::endl;
    std::cout << "Value via Pointer: " << *ptr << std::endl;

    return 0;
}

/*
Problem statement 07
References
*/

int main() {
    int value = 10;
    int& ref = value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Reference: " << ref << std::endl;

    return 0;
}

/*
Problem statement 08
Structures
*/

struct Person {
    std::string name;
    int age;
};

int main() {
    Person person;
    person.name = "John Doe";
    person.age = 30;

    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}

/*
Problem statement 09
Classes and Objects
*/

class Animal {
public:
    std::string name;
    void makeSound() {
        std::cout << "Some generic animal sound." << std::endl;
    }
};

int main() {
    Animal animal;
    animal.name = "Generic Animal";
    animal.makeSound();

    return 0;
}

/*
Problem statement 10
Inheritance
*/

class Dog : public Animal {
public:
    void makeSound() override {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.name = "Dog";
    dog.makeSound();

    return 0;
}

/*
Problem statement 11
Polymorphism
*/

class Cat : public Animal {
public:
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Outputs: Woof!
    animal2->makeSound(); // Outputs: Meow!

    delete animal1;
    delete animal2;

    return 0;
}

/*
Problem statement 12
Exception Handling
*/

int main() {
    try {
        throw std::runtime_error("An error occurred!");
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
