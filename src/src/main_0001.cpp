#include <iostream>
#include "problem_0001.h"

int main(int, char**) {    
    const std::vector<int> multof   = {3,5};
    constexpr int below             = 1000;
    int res = sum_mults(multof, below);
    std::cout << "sum: " << res << std::endl;
}