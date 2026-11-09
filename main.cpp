#include <iostream>

int main() {
    int x{};
    int y{};
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    const int sum = x + y;
    std::cout << "Sum = " << sum << std::endl;
    return 0;
}