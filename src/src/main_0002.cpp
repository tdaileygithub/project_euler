#include <iostream>
#include <numeric>
#include "problem_0002.h"

using namespace euler;

int main(int ac, char** av)         
{    
    constexpr int fiblessthan           = 4000000;    
    const int fibn                      = fib_sequence_less_than( fiblessthan );
    const std::vector<int> fibs         = fib_sequence (fibn);
    const std::vector<int> fibs_even    = vector_even_values(fibs);
    const int sum_fibs_even             = std::accumulate(fibs_even.cbegin(), fibs_even.cend(), 0);
    
    std::cout << sum_fibs_even << std::endl;
}