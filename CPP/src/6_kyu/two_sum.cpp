#include <iostream>
#include <vector>

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
    int len = numbers.size();
    for(int i=0; i <=len-1; i++){
        for(int j=i+1;j <=len;j++){
            if(numbers[i]+numbers[j]==target){
                // return {i,j};
                std::cout <<i<<", "<<j<<std::endl;
            }
        }
    }
    return {-1, -1};
}

int main(int argc, char const *argv[])
{
    two_sum({1, 2, 3}, 4) ;
    std::cout << std::endl;
    two_sum({1234, 5678, 9012}, 14690);
    std::cout << std::endl;
    two_sum({2, 2, 3}, 4);
    std::cout << std::endl;
    return 0;
}