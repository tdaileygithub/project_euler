#include "problem_0001.h"

#include <exception>
#include <boost/program_options.hpp>
#include <iostream>
namespace po = boost::program_options;

using namespace euler;

int main(int ac, char** av)         
{    
    int prob_num=1;

    try 
    {
        po::options_description desc("Allowed options");
        desc.add_options()
            ("help",        "produce help message")
            ("problem,p",   po::value<int>(&prob_num), "euler problem number");

        po::variables_map vm;
        po::store(po::parse_command_line(ac, av, desc), vm);
        
        if (vm.count("help")) {
            std::cout << desc << std::endl;
            return 0;
        }
        po::notify(vm);
        
        if (1 == prob_num) 
        {
            const std::vector<int> multof   = {3,5};
            constexpr int below             = 1000;
            int res = sum_mults(multof, below);
            std::cout << "sum: " << res << std::endl;

            return 233168 == res ? 0 : 1;
        }
        throw;
    }
    catch(std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 1;
}