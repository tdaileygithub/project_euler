#include "problem_0001.h"
#include <algorithm>

int sum_mults (const std::vector<int>& multiple_of, const int below_val) {
    int sum_v       = 0;

    for (int itr=0; itr<below_val; itr++) {

        auto is_divisible = [itr](int num) {return 0 == itr % num;};

        std::vector<int> mults;
        std::copy_if(   multiple_of.begin(),
                        multiple_of.end(),
                        std::back_inserter(mults), is_divisible);
        
        if ( mults.size() > 0) {
            sum_v += itr;
        }
    }
    return sum_v;
}