#include <iostream>

static void calculator(const int option) {
    double x{};
    double y{};
    double result{};
    std::cout << "=== | Введіть x: ";
    std::cin >> x;
    std::cout << "=== | Введіть y: ";
    std::cin >> y;
    if (option == 1) {
        result = x + y;
        std::cout << "Додавання: x + y = " << result << std::endl;
    } else if (option == 2) {
        result = x - y;
        std::cout << "Віднімання: x - y = " << result << std::endl;
    } else if (option == 3) {
        result = x * y;
        std::cout << "Множення: x * y = " << result << std::endl;
    } else if (option == 4) {
        result = x / y;
        std::cout << "Ділення: x / y = " << result << std::endl;
    }
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
        if (option > 0 && option <= 4) {
            calculator(option);
        } else if ( option == 0 ) {
            std::cout << "Роботу програми завершено.";
        } else {
            std::cout << "Введіть корректний номер операції." << std::endl;
        }
    } while (option != 0);
    return 0;
}