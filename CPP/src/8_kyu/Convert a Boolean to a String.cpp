#include <string>
#include <iostream>

std::string boolean_to_string(bool b)
{
    return (b == true) ? "true" : "false";
}

int main(int argc, char const *argv[])
{
    std::cout << boolean_to_string(true) << std::endl;
    std::cout << boolean_to_string(false) << std::endl;
    std::cout << boolean_to_string(false) << std::endl;
    std::cout << boolean_to_string(true) << std::endl;
}
