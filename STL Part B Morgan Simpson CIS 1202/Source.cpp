// Morgan Simpson
// CIS 1202 M01
// April 29th 2024

#include <iostream>
#include <cmath>
#include <type_traits>

template<typename T>
typename std::enable_if<std::is_floating_point<T>::value, T>::type
half(T value) {
    return value / 2.0;
}

int half(int value) {
    return static_cast<int>(std::round(static_cast<double>(value) / 2.0));
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    std::cout << half(a) << std::endl;
    std::cout << half(b) << std::endl;
    std::cout << half(c) << std::endl;

    return 0;
}
