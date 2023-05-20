#include <iostream>
#include <math.h>
unsigned halving_sum(unsigned n)
{
    // Chana Logic
    int result = n, i = 1;
    while (n > 1)
    {
        result += n / pow(2, i);
        n = n / pow(2, i);
    }
    return result;
}

int main(int argc, char const *argv[])
{
    std::cout << halving_sum(25) << std::endl;  // Result 47
    std::cout << halving_sum(127) << std::endl; // Result 247
    return 0;
}
