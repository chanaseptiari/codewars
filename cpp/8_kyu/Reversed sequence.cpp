#include <iostream>
#include <vector>


std::vector<int> reverseSeq(int n) {
    std::vector<int> result;
    for (int i = n; i >= 1; --i) {
        result.push_back(i);
    }
    return result;
}


int main(){
    reverseSeq(1);
    reverseSeq(2);
    reverseSeq(5);
    reverseSeq(10);
    
}
