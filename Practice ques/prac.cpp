#include <iostream>

int main() {
    // Declare a boolean variable called my_bool and initialize it to true
    bool my_bool = true;

    // Print the initial value of my_bool
    std::cout << std::boolalpha << my_bool << std::endl;

    // Re-assign my_bool to the value of test
    bool test = false;
    my_bool = test;

    // Print the updated value of my_bool
    std::cout << std::boolalpha << my_bool << std::endl;

    return 0;
}