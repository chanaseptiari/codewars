#include <iostream>

long long rowSumOddNumbers(unsigned n)
{
    int a = -1, b, result;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a += 2;
            b += a;
            result = b;
        }
        b = 0;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    std::cout << rowSumOddNumbers(1) << std::endl;  // Result 1
    std::cout << rowSumOddNumbers(5) << std::endl;  // Result 125
    std::cout << rowSumOddNumbers(42) << std::endl; // Result 74088
}
