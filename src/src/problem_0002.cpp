#include "problem_0002.h"
#include <algorithm>

namespace euler
{
    std::vector<int> fib_sequence (const int n) 
    {
        std::vector<int> fibs(n,0);
        if (1 == n) 
        {
            fibs[0] = 1;
        }
        else if (2 == n) 
        {
            fibs[0] = 1;
            fibs[1] = 1;
        }
        else 
        {
            fibs[0] = 1;
            fibs[1] = 1;
            for (int idx=2;idx<n;idx++) 
            {
                fibs[idx] = fibs[idx-2] + fibs[idx-1];                
            }
        }
        return fibs;
    }

    int fib_sequence_less_than (const int n) 
    {
        bool done = false;
        int idx=1;
        for (idx=1;idx<n;idx++) 
        {
            auto fibs   = fib_sequence(idx);
            auto fibmax = std::max_element( fibs.begin(), fibs.end() );
            done = *fibmax > n;
            if (done) 
            {
                break;
            }
        }
        return idx - 1;
    }

    std::vector<int> vector_even_values (const std::vector<int>& vals) 
    {
        std::vector<int> v;
        std::for_each(vals.cbegin(), vals.cend(), [&](const int &n)
        { 
            if (0 == n %2 ){
                v.push_back(n);
            }            
        });
        return v;
    }
}