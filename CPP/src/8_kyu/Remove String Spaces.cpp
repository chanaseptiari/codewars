#include <iostream>
#include <string>

std::string no_space(std::string x)
{
    std::string tmp;
    for (int i = 0; i < x.size(); i++)
    {
        if ((int)x[i] != 32)
        {
            tmp.push_back(x[i]);
        }
    }
    return tmp;
}

int main(int argc, char const *argv[])
{
    std::cout << no_space("8 j 8   mBliB8g  imjB8B8  jl  B") << std::endl;
    std::cout << no_space("8 8 Bi fk8h B 8 BB8B B B  B888 c hl8 BhB fd") << std::endl;
    std::cout << no_space("8aaaaa dddd r     ") << std::endl;
    std::cout << no_space("jfBm  gk lf8hg  88lbe8 ") << std::endl;
    std::cout << no_space("8j aam") << std::endl;
    return 0;
}
