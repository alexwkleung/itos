/*
* this is a basic implementation of an int to string conversion using std::stringstream.
* it can also be used for types other than int, such as float, double, long, long double, long long, etc.
* the output contains the maximum precision for any type T

* NOTE:
* there are no checks before the conversion
*/

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>

//int to string template
//allows conversion of any type (T) to be converted into a string
template<typename T> std::string itos(const T &num) {
    std::ostringstream oss{};
    
    //set precision to a number of base-10 digits that can be any value of type T
    oss << std::setprecision(std::numeric_limits<T>::max_digits10);
    
    oss << num;
    
    return oss.str();
}

int main() {
    //testing
    std::cout << itos<long double>(M_PI) << '\n';
    std::cout << itos<long long>(1293981239128312309) << '\n';
    std::cout << itos<int>(-1239123) << '\n';
    std::cout << itos<float>(0.009) << '\n';
    std::cout << itos<int>(8) << '\n';
    std::cout << itos<int>((-89)) << '\n';
    std::cout << itos(90) << '\n';
    std::cout << itos<std::string>("1001023") << '\n';

    return 0;
}