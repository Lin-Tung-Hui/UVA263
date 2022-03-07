#include <iostream>
#include <algorithm>
#include "numberchain.h"

int NumberChain::compute_chain_length(std::string original_number)
{
    int count = 1;
    std::string tmp = original_number;

    std::sort(tmp.begin(), tmp.end(), std::greater< int >());
    int large_number = std::stoi(tmp);

    std::sort(tmp.begin(), tmp.end(), std::less< int >());
    int little_number = std::stoi(tmp);
    int result_number = large_number - little_number;

    std::string result_string = std::to_string(result_number);
    std::cout << large_number << " - " << little_number << " = " << result_number << std::endl;

    if (original_number.compare(result_string) != 0)
        count = compute_chain_length(result_string) + 1;

    return count;
}
