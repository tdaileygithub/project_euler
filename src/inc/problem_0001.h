#include <vector>

#ifndef PROBLEM_0001_H
#define PROBLEM_0001_H

namespace euler {
    /**
     *   \brief Sum of all the multiples of in a list below a number.
     *   
     *   \param multiple_of Is integer less than below_val a multiple of any in this list.
     *   \param below_val Check integers below this value
     *   \return The sum 
     *
     **/    
    int sum_mults (const std::vector<int>& multiple_of, const int below_val);
}

#endif //PROBLEM_0001_H