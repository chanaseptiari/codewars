#include <iostream>
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
    std::string res;
    for (int i = 0; i < repeat;i++){
        res.append(str);
    }
    return res;
}

int main() {
    std::cout << repeat_str(3, "*") << std::endl;
    std::cout << repeat_str(5, "#") << std::endl;
    std::cout << repeat_str(2, "ha ") << std::endl;
    std::cout << repeat_str(5, ">") << std::endl;
    std::cout << repeat_str(10, "!") << std::endl;
    std::cout << repeat_str(3, "hello ") << std::endl;
    std::cout << repeat_str(3, "$") << std::endl;
    std::cout << repeat_str(5, "a") << std::endl;
    std::cout << repeat_str(6, "A") << std::endl;
    std::cout << repeat_str(7, "aA") << std::endl;
    std::cout << repeat_str(3, "") << std::endl;
    std::cout << repeat_str(0, "null") << std::endl;
    std::cout << repeat_str(0, "") << std::endl;
     
}
