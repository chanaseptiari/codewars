#include <iostream>

int centuryFromYear(int year)
{
    // float a = 0, b = 0;
    // a = (int)year / 100;
    // b = ((float)year / 100) - ((int)year / 100);
    // if (b > 0.00)
    // {
    //     a++;
    // }
    // return a;

    return year % 100 == 0 ? year / 100 : year / 100 + 1;
}

int main(int argc, char const *argv[])
{
    std::cout << centuryFromYear(1705) << std::endl;
    std::cout << centuryFromYear(1900) << std::endl;
    std::cout << centuryFromYear(1601) << std::endl;
    std::cout << centuryFromYear(2000) << std::endl;
}
