#include <iostream>

int main() {

    int add[10];
    std::cout << "Массив случайных чисел от 1 до 100" << std::endl;

    for (int a = 0; a < 10; a++) {
        add[a] = rand() % 100 + 1;
        std::cout << "[" << a << "]: " << add[a] << std::endl;

    }
    int max_v = 0;

    for (int a = 0; a < 10; a++) {
        if (add[a] > max_v) {
            max_v = add[a];
        }
    }
    std::cout << "Максимальное значение:" << max_v << std::endl;
    int min_v = 1;

    for (int a = 0; a < 10; a++) {
        if (add[a] < min_v) {
            min_v = add[a];
        }
    }
    std::cout << "Минимальное  значение:" << min_v << std::endl;
    int sum = 0;
    for (int a = 0; a < 10; a++) {
        sum += add[a];
    }
    sum = sum / 10;
    std::cout << sum;

}