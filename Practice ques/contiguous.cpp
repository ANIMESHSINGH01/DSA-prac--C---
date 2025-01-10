#include <iostream>
#include <string>

bool checkOnesSegment(const std::string& s) {
    int consecutiveOnes = 0;

    for (char ch : s) {
        if (ch == '1') {
            consecutiveOnes++;
        } else {
            if (consecutiveOnes > 1) {
                return false;
            }
            consecutiveOnes = 0;
        }
    }

    return true;
}

int main() {
    // Example usage
    std::string input1 = "1001";
    bool result1 = checkOnesSegment(input1);
    std::cout << "Example 1: " << std::boolalpha << result1 << std::endl;

    // You can add more test cases

    return 0;
}
