``cpp
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

class Map {
public:
    // Add elements to the map
    void put(const string &key, int value) {
        m_data[key] = value;
    }

    // Get the value associated with a key
    int get(const string &key) const {
        if (m_data.find(key) == m_data.end()) {
            throw runtime_error("Key not found in the map.");
        }
        return m_data[key];
    }

    // Check if a key exists in the map
    bool contains(const string &key) const {
        return m_data.find(key) != m_data.end();
    }

    // Remove an element from the map
    void remove(const string &key) {
        if (m_data.erase(key) == 0) {
            throw runtime_error("Key not found in the map.");
        }
    }

    // Iterate over all key-value pairs in the map
    void for_each(function<void(const string &, int)> cb) const {
        for (const auto &pair : m_data) {
            cb(pair.first, pair.second);
        }
    }

private:
    unordered_map<string, int> m_data;
};

int main() {
    Map map;

    map.put("one", 1);
    map.put("two", 2);
    map.put("three", 3);

    if (map.contains("one")) {
        cout << "One exists in the map." << endl;
    }

    try {
        int value = map.get("four");
        cout << "The value for 'four' is: " << value << endl; // This line should throw an exception
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }

    map.remove("two");

    modify_values(map);

    cout << "Size of the map: " << map.size() << endl;

    cout << "Keys in the map:";
    for (const auto &key : map) {
        cout << " " << key.first;
    }
    cout << endl;

    cout << "Values in the map:";
    for (const auto &value : map.values()) {
        cout << " " << value;
    }
    cout << endl;

    return 0;
}

// Example callback function
void modify_values(Map &map) {
    map.for_each([&](const string &key, int value) {
        cout << "The key ' " << key << " ' old value is : " << value << ", and it will be modified to: " << value + 1 << endl;
        map.put(key, value + 1);
    });
}
```

This C++ code matters for several reasons:

1. **Implementation of a Custom Map Data Structure**: The code provides a simple implementation of a map data structure using the standard library's unordered_map container. This custom map class (Map) provides methods for inserting, retrieving, checking the existence of, and removing elements. It also provides a mechanism for iterating over all key-value pairs using a callback function.

2. **Usage of STL Containers and Functions**: The code uses Standard Template Library (STL) containers like unordered_map, vector, and string, as well as functionalities like find(), end(), erase(), and for_each(). It also uses utilities like tuple, make_pair, and runtime_error.

3. **Error Handling**: The code includes exception handling for cases where a key is not found in the map. This is done using the runtime_error class from the exception header.

4. **Callback Function**: The code provides an example of a callback function that modifies the values in the map during iteration. This shows how the for_each() function can be used to apply a function to every element in the map.

5. **Test Cases**: The main() function includes test cases for inserting, checking, and removing elements from the map, as well as for iterating over the map and modifying its values. The function also demonstrates how to catch exceptions and handle missing keys.

In summary, this code matters because it provides a simple custom data structure that leverages the power of STL containers and functions, and includes error handling and test cases to demonstrate its usage.

In this C++ code, a simple implementation of a map data structure is provided using the unordered_map container from the Standard Template Library (STL). The implementation includes basic functionalities such as insertion, erasure, finding an element, and iterating over the map.

Here's an explanation of the code:

1. `#include` statements: These include necessary header files needed for the code to compile and run, such as iostream for input/output operations, vector, string, unordered_map, and utility.

2. `using namespace std;` statement: This line makes it easier to use the functionalities without having to specify std:: before each function or object in the following code.

3. `class Map`: This is the user-defined map data structure. It has a private `unordered_map<string, int> m_data` as its data structure.

4. `put(const string &key, int value)`: This method adds an element to the map. It takes a key and a value, and adds the key-value pair to the map's unordered_map.

5. `get(const string &key) const`: This method returns the value corresponding to the given key. If the key is not found, it throws a runtime_error exception.

6. `contains(const string &key) const`: This method checks if a given key is present in the map. If the key is not found, it returns false.

7. `remove(const string &key)`: This method removes the element with the given key from the map. If the key is not found, it throws a runtime_error exception.

8. `for_each(function<void(const string &, int)> cb) const`: This method takes a callback function (lambda function) and applies this function to each key-value pair in the map.

9. `main()`: This is the main function where we test the Map class. It creates a Map object, adds elements using the put method, and then tests the contains, get, and remove methods. It also uses the for_each method to modify values in the map using a lambda function.

10. `modify_values(Map &map)`: This is an example callback function that modifies the values in the map. It takes the map object by reference and uses the for_each method to iterate over the key-value pairs, modifying the values and then adding them back to the map.


As a beginner, you might make some common mistakes. Here are a few suggestions to improve it:

1. **Ensure destructors are defined**: If your `Map` class has any resources that need to be freed (like file handles, network connections, etc.), ensure you define a proper destructor.

2. **Use `const` correctly**: In your `get()` method, you are updating the value even though it's supposed to be a constant method. Change the return type from `int` to `int const&` to allow read-only access to the value.

3. **Consider providing an 'at' function**: Although the `find` and `[]` operator can handle key absence, it would be more convenient to also provide an `at` function which throws an exception if the key is not found, similar to what the `std::vector` does.

4. **Check the return type of `remove`**: The `remove` method returns an iterator to the next element, but in your code, you check if the number of elements removed is zero. It's better to immediately check if the key exists before removing it, like this:

    ```cpp
    if (m_data.erase(key) == 0) {
        cerr << "Key not found in the map." << endl;
    }
    ```

5. **Adjust the callback function in 'modify_values'**: At the moment, the callback function changes the values in the map but also prints them. You might want to split those operations into two different functions.

6. **Use `auto` and `range-based for` loops instead of explicit types**: For easier code reading and maintenance, use `auto` and range-based for loops when appropriate. For example:

    Instead of:
    ```cpp
    for (const auto &pair : m_data) {
    ```

    Write:
    ```cpp
    for (const auto &entry : m_data) {
    ```

7. **Consider adding error checking to 'put'**: Currently, the `put()` method does not check if the key is already present in the map during an insertion, which might lead to unexpected behavior.

8. **Error handling for 'for_each'**: There is no check in the `for_each` method to see if the callback passes correctly, and no error handling if the callback throws an exception. You could modify the method to handle exceptions, and make the callback return a boolean indicating if it was successful.

9. **Consider using ' хит-ап' map instead of unordered_map**: If you are using the map for its fast lookups, consider using a `boost::unordered_multiset` (or the `std::experimental::maps::flat_hash_set` introduced in C++20) as the internal implementation of your map, that way the keys in the map will order automatically, and it will be easier to make `operator[ ]` const.

10. **Ensure header files are included before using them**: Be sure to include all required header files before using them in your code.

Correcting these points will improve the code's readability, reliability, and maintainability.