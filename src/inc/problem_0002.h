#include <vector>

#ifndef PROBLEM_0002_H
#define PROBLEM_0002_H

namespace euler {
    /**
     *   \brief Return fibonacci sequence numbers up to n
     *        
     *   \param n Fibonacci seqeuence number limit
     *   \return Sequence of fibonacci numbers
     *
     **/    
    std::vector<int> fib_sequence (const int n);

    /**
     *   \brief Return fibonacci sequence numbers where last term is less than value
     *        
     *   \param n Last term less than
     *   \return Fibonacci sequence number
     *
     **/    
    int fib_sequence_less_than (const int n);    

    /**
     *   \brief Return all even values from a vector
     *        
     *   \param vals Source vector
     *   \return Vector of evens
     *
     **/    
    std::vector<int> vector_even_values (const std::vector<int>& vals);    
}

#endif //PROBLEM_0002_H