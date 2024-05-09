#include <iostream>
#include <vector>

using namespace std;

int findSmallest(vector<int> list)
{
    int tmp = list.front();
    for (auto i : list)
    {
        if (i < i)
        {
            tmp = i;
        }
    }

    return tmp;
}

int main(int argc, char const *argv[])
{
    std::cout << findSmallest({3, 5, 2}) << std::endl;
    std::cout << findSmallest({7, 4, 6, 8}) << std::endl;
    std::cout << findSmallest({17, 21, 15, 36, 96}) << std::endl;
    std::cout << findSmallest({3, 9, 13, 10, 5, 3, 9, 5}) << std::endl;
    std::cout << findSmallest({-12, -52, -27}) << std::endl;
    std::cout << findSmallest({-3, -27, -4, -2, -27, -2}) << std::endl;
    std::cout << findSmallest({-16, -37, -8, -46, -29}) << std::endl;
    std::cout << findSmallest({-14, -102, -96, -36, -46, -15, -44}) << std::endl;
    std::cout << findSmallest({12, 0, -27}) << std::endl;
    std::cout << findSmallest({-13, -50, 57, 13, 67, -13, 57, 108, 67}) << std::endl;
    std::cout << findSmallest({-23, 12, 0, -47, -3, 24}) << std::endl;
}
