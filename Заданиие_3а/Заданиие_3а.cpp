#include <iostream>

int main()
{
    int max[10];
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите 10 элементов массива"<<std::endl;
    for (int a = 0; a < 10; a++) {
        std::cin >> max[a];
    }

    std::cout << "Введенный массив" << std::endl;
    for (int a = 0; a < 10; a++) {
        std::cout <<"["<<a<<"]: " << max[a] << std::endl;
    }
    //Рандом
    int add[10];
    std::cout << "Массив случайных чисел от 1 до 100" << std::endl;

    for (int a = 0; a < 10; a++) {
        add[a] = rand() % 100 + 1;
        std::cout << "[" << a << "]: " << add[a] << std::endl;
    
    }
    int max_v=0;

    for (int a = 0; a < 10; a++) {
        if (add[a] > max_v) {
            max_v = add[a];
        }
    }
    std::cout << "Максимальное значение:"<<max_v<<std::endl;
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
    std::cout<< sum;

    int t = add[2];
    add[2] = add[9];
    add[9] = t;

    char im[] = "abcdefg";
    int i = 0;
    while (im[i] != '\0') {
        i++;
    }
    int len;
    len = std::strlen(im);
}




