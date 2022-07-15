#include <iostream>

int my_sum(int n) {
    if (n == 0) {
        return 0;
    }
    auto my_sum = [](auto x) { return -1; };
    return my_sum(n-1) + n;
}

int main() {
    std::cout << std::to_string(my_sum(7)) << std::endl;
}