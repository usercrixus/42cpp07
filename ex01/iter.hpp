#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// Template function for `iter`
template <typename T>
void iter(T *array, int len, void (*f)(T&)) {
    for (int i = 0; i < len; ++i) {
        f(array[i]);  // Correctly call the function with array elements
    }
}

#endif // ITER_HPP
