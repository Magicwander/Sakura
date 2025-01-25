/*
Title: Comprehensive C++ Arrays Example
Difficulty: Basic to Intermediate
Time spent: will be tracked and updated at the end
Concepts covered:
- Array Declaration and Initialization
- Accessing Array Elements
- Modifying Array Elements
- Array Size and Capacity
- Iterating Over Arrays
- Multi-dimensional Arrays
- Passing Arrays to Functions
- Returning Arrays from Functions
- Dynamic Arrays
- Array Operations (Insertion, Deletion, Searching, Sorting)
- Array Algorithms (Min, Max, Sum, Average)
- Array and Pointers
- Array and Structures
- Array and Classes
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <thread>
#include <stdexcept>

// Array Declaration and Initialization
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Accessing Array Elements
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "First element: " << arr[0] << std::endl;
    std::cout << "Last element: " << arr[4] << std::endl;
    return 0;
}

// Modifying Array Elements
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    arr[0] = 10;
    arr[4] = 50;
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Array Size and Capacity
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::cout << "Array size: " << sizeof(arr) / sizeof(arr[0]) << std::endl;
    return 0;
}

// Iterating Over Arrays
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Multi-dimensional Arrays
int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

// Passing Arrays to Functions
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    return 0;
}

// Returning Arrays from Functions
std::vector<int> createArray() {
    return {1, 2, 3, 4, 5};
}

int main() {
    std::vector<int> arr = createArray();
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Dynamic Arrays
int main() {
    int* arr = new int[5];
    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}

// Array Operations (Insertion, Deletion, Searching, Sorting)
void insertElement(int arr[], int& size, int element, int position) {
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    ++size;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    insertElement(arr, size, 10, 2);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

void deleteElement(int arr[], int& size, int position) {
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    deleteElement(arr, size, 2);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index = searchElement(arr, 5, 3);
    std::cout << "Element found at index: " << index << std::endl;
    return 0;
}

void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    sortArray(arr, 5);
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Array Algorithms (Min, Max, Sum, Average)
int findMin(int arr[], int size) {
    return *std::min_element(arr, arr + size);
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    std::cout << "Minimum element: " << findMin(arr, 5) << std::endl;
    return 0;
}

int findMax(int arr[], int size) {
    return *std::max_element(arr, arr + size);
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    std::cout << "Maximum element: " << findMax(arr, 5) << std::endl;
    return 0;
}

int findSum(int arr[], int size) {
    return std::accumulate(arr, arr + size, 0);
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    std::cout << "Sum of elements: " << findSum(arr, 5) << std::endl;
    return 0;
}

double findAverage(int arr[], int size) {
    return static_cast<double>(findSum(arr, size)) / size;
}

int main() {
    int arr[5] = {5, 3, 4, 1, 2};
    std::cout << "Average of elements: " << findAverage(arr, 5) << std::endl;
    return 0;
}

// Array and Pointers
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;
    return 0;
}

// Array and Structures
struct Point {
    int x, y;
};

int main() {
    Point points[3] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; ++i) {
        std::cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")" << std::endl;
    }
    return 0;
}

// Array and Classes
class Rectangle {
public:
    int width, height;
    Rectangle(int w, int h) : width(w), height(h) {}
    int area() const {
        return width * height;
    }
};

int main() {
    Rectangle rectangles[3] = {Rectangle(1, 2), Rectangle(3, 4), Rectangle(5, 6)};
    for (int i = 0; i < 3; ++i) {
        std::cout << "Rectangle " << i + 1 << " area: " << rectangles[i].area() << std::endl;
    }
    return 0;
}

