#include <iostream>
#include "problem_0001.h"

using namespace euler;

namespace euler {
namespace test {
    bool sum_of_all_multiples_of_3_or_5_below_1000() {
        const std::vector<int> multof   = {3,5};
        constexpr int below             = 1000;
        int res = sum_mults(multof, below);
        return 233168 == res ? 0 : 1;
    }
}
}

int main(int, char**) {    
    return euler::test::sum_of_all_multiples_of_3_or_5_below_1000();
}