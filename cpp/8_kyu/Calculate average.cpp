#include <iostream>
#include <vector>

double calcAverage(const std::vector<int> &values)
{
    double result = 0;
    for (int i = 0; i < values.size(); i++)
    {
        result += values[i];
    }
    result = result / values.size();
    return result;
}

int main(int argc, char const *argv[])
{
    std::cout << calcAverage({2, 5}) << std::endl;
    std::cout << calcAverage({5}) << std::endl;
    std::cout << calcAverage({4, 2, 1}) << std::endl;
    std::cout << calcAverage({3, 2, 5, 1}) << std::endl;
    std::cout << calcAverage({3, 2, 3, 5, 1}) << std::endl;
    std::cout << calcAverage({3, 4, 2, 4, 5}) << std::endl;
    std::cout << calcAverage({-2, -6, 5, 2}) << std::endl;
    std::cout << calcAverage({6, -6, 9, 8}) << std::endl;
    std::cout << calcAverage({-7, -4, -10, -6, -6}) << std::endl;
    std::cout << calcAverage({-3, -8, -10, -6, -5}) << std::endl;
    std::cout << calcAverage({-4, -4}) << std::endl;
    std::cout << calcAverage({-5}) << std::endl;
    std::cout << calcAverage({20, 14, 16, 11, 20, 14, 14}) << std::endl;
    std::cout << calcAverage({-1, 0, -3, 10, 2, -9, -1}) << std::endl;
    std::cout << calcAverage({15, 18, 16, 17, 15, 12, 16, 15}) << std::endl;
    std::cout << calcAverage({13, 11, 11, 19, 12, 20, 17, 16, 14}) << std::endl;
    std::cout << calcAverage({13, 15, 13, 17, 19, 20, 17, 18, 13, 18}) << std::endl;
    std::cout << calcAverage({3, 7, 2, -5, 10, 8, -7, 1}) << std::endl;
    std::cout << calcAverage({24, 30, 12, 26, 23, 24, 29, 12, 16, 13}) << std::endl;
    std::cout << calcAverage({-2, -2, 1, 1, -2, -8, 3, -4, -2, 1}) << std::endl;
    std::cout << calcAverage({20, 28, 25, 11, 24, 25, 22, 12, 15, 12, 14, 22}) << std::endl;
    std::cout << calcAverage({46, 35, 45, 47, 25, 42, 43, 40, 35, 25, 48}) << std::endl;
    std::cout << calcAverage({-4, 6, 7, -5, -4, -2, -3, 7, 7, 5, 8, -6, 5}) << std::endl;
    std::cout << calcAverage({22, 22, 24, 15, 12, 18, 22, 14, 24, 23, 29, 19, 22, 20, 26}) << std::endl;
}
