#include <iostream>
#include <vector>
#include <math.h>

int square_sum(const std::vector<int> &numbers)
{
    int value = 0;
    for (int i = 0; i < numbers.capacity(); i++)
    {
        value += pow(numbers[i], 2);
    }
    return value;
}

int main(int argc, char const *argv[])
{
    std::cout << square_sum({1, 2}) << std::endl;
    std::cout << square_sum({0, 3, 4, 5}) << std::endl;
    return 0;
}
