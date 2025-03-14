#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> arr1;
        std::cout << "Size of arr1 (empty): " << arr1.getSize() << std::endl;

        Array<int> arr2(5);
        for (unsigned int i = 0; i < arr2.getSize(); ++i)
            arr2[i] = i * 10;

        std::cout << "Contents of arr2: ";
        for (unsigned int i = 0; i < arr2.getSize(); ++i)
            std::cout << arr2[i] << " ";
        std::cout << std::endl;

        Array<int> arr3 = arr2;
        std::cout << "Contents of arr3 (copied from arr2): ";
        for (unsigned int i = 0; i < arr3.getSize(); ++i)
            std::cout << arr3[i] << " ";
        std::cout << std::endl;

        Array<int> arr4(3);
        arr4 = arr2;
        std::cout << "Contents of arr4 (assigned from arr2): ";
        for (unsigned int i = 0; i < arr4.getSize(); ++i)
            std::cout << arr4[i] << " ";
        std::cout << std::endl;

        std::cout << arr2[10] << std::endl;  // Will throw an exception
    }
    catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
