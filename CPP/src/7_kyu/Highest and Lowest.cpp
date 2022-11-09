#include <iostream>
#include <string>
#include <cstring>

std::string highAndLow(const std::string &numbers)
{
    int len = numbers.size();
    char arr[len + 1];
    strcpy(arr, numbers.c_str());
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    highAndLow("8 3 -5 42 -1 0 0 -9 4 7 4 -4");
    highAndLow("1 2 3");
    return 0;
}
