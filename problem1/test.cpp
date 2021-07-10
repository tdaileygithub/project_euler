#include <iostream>
#include "problem1.h"

int main(int, char**) {    
    const std::vector<int> multof   = {3,5};
    constexpr int below             = 1000;
    int res = sum_mults(multof, below);
    return 233168 == res ? 0 : 1;
}