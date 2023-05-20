#include <iostream>
#include <vector>
#include <string>

// using namespace std;

std::vector<int> digitize(unsigned long n)
{
    std::vector<int> num;
    while (n > 0)
    {
        num.push_back(n % 10);
        n /= 10;
    }
    return num;
}

int main(int argc, char const *argv[])
{
    // std::cout << digitize(123) << std::endl;
    digitize(35231);
    return 0;
}
