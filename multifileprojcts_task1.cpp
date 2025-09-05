#include <iostream>
#include "math_functions.cpp"
#include "math_functions.h"

// Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): 5

int main(int argc, char** argv)
{

    double num_1{};
    double num_2{};

    std::cout << "Enter num_1: "; std::cin >> num_1;
    std::cout << "Enter num_2: "; std::cin >> num_2;

    int answer{};

    std::cout << "Choose an operation: (1 - sum, 2 - substract, 3 - multiply, 4 - devision, 5 - exponentiation): ";
    std::cin >> answer;

    double result{};

    switch (answer)
    {
    case 1: { result = sum(num_1, num_2);           std::cout << num_1 << " + " << num_2 << " = " << result; break; }
    case 2: { result = substract(num_1, num_2);     std::cout << num_1 << " - " << num_2 << " = " << result; break; }
    case 3: { result = multiply(num_1, num_2);      std::cout << num_1 << " * " << num_2 << " = " << result; break; }
    case 4: { result = division(num_1, num_2);       std::cout << num_1 << " / " << num_2 << " = " << result; break; }
    case 5: { result = exponentiation(num_1, num_2); std::cout << num_1 << " exp in " << num_2 << " = " << result; break; }
    }


    return EXIT_SUCCESS;
}
