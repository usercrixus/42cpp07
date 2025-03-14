#include "iter.hpp"
#include <iostream>
#include <string>

// Example function for printing
template <typename T>
void printElement(T &element) {
    std::cout << element << " ";
}

// Example function for modifying values
void doubleValue(int &value) {
    value *= 2;
}

int main() {
    // Testing with integers
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "Original int array: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Doubled int array: ";
    iter(intArray, 5, doubleValue);
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    // Testing with strings
    std::string strArray[] = {"Hello", "World", "C++", "Templates"};
    std::cout << "String array: ";
    iter(strArray, 4, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
