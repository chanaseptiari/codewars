#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> number(const std::vector<std::string> &lines)
{
    // Referensi ILLHOME
    std::vector<std::string> res = lines;
    for (size_t i = 0; i < res.size(); i++)
        res[i] = res[i].insert(0, std::to_string(i + 1) + ": ");
    return res;
}

int main(int argc, char const *argv[])
{
    number({"a", "b", "c"}); // Result {"1: a", "2: b", "3: c"}
    number({});              // Result {}
    return 0;
}
