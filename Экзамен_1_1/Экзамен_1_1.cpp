#include <iostream>

int main()
{
    int max[10];

    setlocale(LC_ALL, "Russian");

    std::cout << "Введите 10 элементов массива" << std::endl;

    for (int a = 0; a < 10; a++) {

        std::cin >> max[a];
    }

    std::cout << "Введенный массив" << std::endl;

    for (int a = 0; a < 10; a++) {

        std::cout << "[" << a << "]: " << max[a] << std::endl;
        return 0;
    }
}
