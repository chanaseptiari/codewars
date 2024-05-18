#include <vector>
#include <iostream>

std::vector<int> countPositivesSumNegatives(const std::vector<int>& input) {
    if (input.size() == 0) return {};

    int countPositives = 0;
    int sumNegatives = 0;

    for (int i : input) {
        if (i > 0) {
            countPositives++;
        } else if (i < 0) {
            sumNegatives += i;
        }
    }

    return {countPositives, sumNegatives};
}


int main(){
    countPositivesSumNegatives(std::vector<int>()) ;
    countPositivesSumNegatives({0, 2, 3, 0, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14}) ;
}
