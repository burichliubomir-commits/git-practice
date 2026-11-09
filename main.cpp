#include <iostream>

static double add(const double a, const double b) {
    return a + b;
}

int main() {
    double x{};
    double y{};
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << "Sum = " << add(x,y) << std::endl;
    return 0;
}