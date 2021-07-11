#include <iostream>
#include "problem_0001.h"

using namespace euler;

#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Project_Euler_Problem_0001
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(sum_multiples_of_3_or_5_below_1000) 
{
    const std::vector<int> multof   = {3,5};
    constexpr int below             = 1000;
    int res = sum_mults(multof, below);
    BOOST_TEST( 233168 == res );
}

int number()
{
    return 22;
}

BOOST_AUTO_TEST_CASE(first_test) // Declares a test case with name "first_test"
{
  int i = 1;
  BOOST_TEST(i); // Checks if i is non-zero

  BOOST_TEST(number() == 2);  // Checks whether the value returned from number method is 2
}