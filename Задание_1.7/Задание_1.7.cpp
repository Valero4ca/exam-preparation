#include <iostream>
#include <math.h> 

int main()
{
    float x, z, result;
    std::cin >> z;
    if (z < 1) {
        std::cout << "z<1\n";
        x = pow(z, 3) + 0.2;
    }
    else if (z >= 1) {
        std::cout << "z>=1\n";
        x = z + log(z);
    }
    result = pow(cos(pow(x, 2)), 3) + pow(sin(pow(x, 3)), 2);
    std::cout << result;
}
