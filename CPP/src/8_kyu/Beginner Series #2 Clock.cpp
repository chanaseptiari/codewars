#include <iostream>
int past(int h, int m, int s)
{
    return ((h * 60 * 60) + (m * 60) + s) * 1000;
}

int main(int argc, char const *argv[])
{
    std::cout << past(0, 1, 1) << std::endl;
    std::cout << past(1, 1, 1) << std::endl;
    std::cout << past(0, 0, 0) << std::endl;
    std::cout << past(1, 0, 1) << std::endl;
    std::cout << past(1, 0, 0) << std::endl;
    return 0;
}
