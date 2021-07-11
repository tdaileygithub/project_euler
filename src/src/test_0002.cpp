#include <iostream>
#include "problem_0002.h"

using namespace euler;

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Project_Euler_Problem_0002
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(sum_even_fibs_less_4million) 
{
    constexpr int fiblessthan           = 4000000;    
    const int fibn                      = fib_sequence_less_than( fiblessthan );
    const std::vector<int> fibs         = fib_sequence (fibn);
    const std::vector<int> fibs_even    = vector_even_values(fibs);
    const int sum_fibs_even             = std::accumulate(fibs_even.cbegin(), fibs_even.cend(), 0);

    BOOST_TEST( 4613732 == sum_fibs_even );
}