#include <iostream>
#include <string>

#include <typeinfo>
template <class T>
void print_type(T t) {
    std::cout << typeid(t).name() << std::endl;
}

void ex1() {
    bool cond = false;
    uint32_t i = 5;
    int32_t j = -3;
    std::cout << std::to_string(cond ? i : j) << std::endl;
    std::cout << std::to_string(!cond ? i : j) << std::endl;
    std::cout << std::to_string(!cond ? j : i) << std::endl;
    std::cout << (cond ? std::to_string(i) : std::to_string(j)) << std::endl;
}
void ex2() {
    bool cond = false;
    float i = 5;
    uint32_t j = -3;
    std::cout << std::to_string(cond ? i : j) << std::endl;
    std::cout << std::to_string(!cond ? i : j) << std::endl;
    std::cout << std::to_string(!cond ? j : i) << std::endl;
    std::cout << (cond ? std::to_string(i) : std::to_string(j)) << std::endl;
}


int main() {
    ex1();
    ex2();
}