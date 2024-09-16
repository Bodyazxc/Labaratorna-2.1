#include <iostream>
#include <cmath> // Для math functions

// Визначення константи π (пі)
const double PI = 3.14159265358979323846;

int main() {
    double x;

    // Введення значення x
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    // Обчислення за формулою z1
    double z1 = 1 * (std::sin(PI) + std::cos(PI)) * x;

    // Обчислення за формулою z2
    double z2 = -x / 2;

    // Виведення результатів
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    // Перевірка на збіг результатів
    if (std::fabs(z1 - z2) < 1e-10) {  // Використовуємо допуск для порівняння
        std::cout << "The results match." << std::endl;
    }
    else {
        std::cout << "The results do not match." << std::endl;
    }

    return 0;
}
