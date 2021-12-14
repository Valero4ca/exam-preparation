// Задание_1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

int main()
{
    float x, y, result = 0;
    std::cin >> x;
    std::cin >> y;
    if (fabs(x) + fabs(y) <= 1 || x >= 0) {
        result = std::max(x, y) + sqrt(x);
        std::cout << "max(x, y) + sqrt(x)\n";
    }
    else if (fabs(x) + fabs(y) >10 || ( x < 0 && y<0)) {
     result = std::min(x, y) + pow(sin(x),2) - cos(pow( y,2));
     std::cout << "std::min(x, y) + pow(sin(x),2) - cos(pow( y,2))\n";
    }
    else {
        result = exp(pow(x, 2)) + fabs(y);
        std::cout << "exp(pow(x, 2)) + fabs(y)\n";
    }
    std::cout << result;
    return 0;
}

