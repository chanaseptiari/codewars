#include <iostream>
#include <string>

std::string fakeBin(std::string str)
{
    std::string tmp;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= '5')
        {
            tmp += "1";
        }
        else
        {
            tmp += "0";
        }
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    // std::cout << fakeBin("45385593107843568") << std::endl;
    // std::cout << fakeBin("509321967506747") << std::endl;
    // std::cout << fakeBin("366058562030849490134388085") << std::endl;
    std::cout << fakeBin("15889923") << std::endl;
    // std::cout << fakeBin("800857237867") << std::endl;

    return 0;
}
