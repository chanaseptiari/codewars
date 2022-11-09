#include <iostream>
int past(int h, int m, int s)
{
    return ((h * 60 * 60) + (m * 60) + s) * 1000;
}

int main(int argc, char const *argv[])
{
    std::cout << past(0, 1, 1) << std::endl; // Result 61000
    std::cout << past(1, 1, 1) << std::endl; // Result 3661000
    std::cout << past(0, 0, 0) << std::endl; // Result 0
    std::cout << past(1, 0, 1) << std::endl; // Result 3601000
    std::cout << past(1, 0, 0) << std::endl; // Result 3600000
    return 0;
}
