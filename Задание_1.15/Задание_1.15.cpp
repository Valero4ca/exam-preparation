#include <iostream>
#include <math.h>

int main()
{
    float x, y, z, r;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    r = std::max(x + y + z, x * y * z) + 3;
    std::cout << r << std::endl;
    r = std::min(pow(x, 2) + pow(y, 2), pow(y, 2) + pow(z, 2)) - 4;
    std::cout << r << std::endl;
    r = std::min(x , y) * std::min(y,z);
    std::cout << r <<std::endl;
    return 0;
}

