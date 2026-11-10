#include <iostream>

static double add(const double a, const double b) {
    return a + b;
}
static double subtract(const double a, const double b) {
    return a - b;
}
static double multiply(const double a, const double b) {
    return a * b;
}
static double divide(const double a, const double b) {
    return a / b;
}

static void printMenu() {
    std::cout << "1. Додавання\n"
                  << "2. Віднімання\n"
                  << "3. Множення\n"
                  << "4. Ділення\n"
                  << "0. Вихід з програми\n"
                  << "Введіть номер операції: ";
}

int main() {
    double x{};
    double y{};
    int option{};
    do {
        printMenu();
        std::cin >> option;
        if (option != 0) {
            std::cout << "Enter x: ";
            std::cin >> x;
            std::cout << "Enter y: ";
            std::cin >> y;
        }
        switch (option) {
            case 1:
                std::cout << "Додавання: x + y = " << add(x, y) << std::endl;
                break;
            case 2:
                std::cout << "Віднімання: x - y = " << subtract(x, y) << std::endl;
                break;
            case 3:
                std::cout << "Множення: x * y = " << multiply(x, y) << std::endl;
                break;
            case 4:
                std::cout << "Ділення: x / y = " << divide(x, y) << std::endl;
                break;
            case 0:
                std::cout << "Роботу програми завершено.";
                return 0;
            default:
                std::cout << "Введіть корректний номер операції.";
                break;
        }
    } while (option != 0);
    return 0;
}