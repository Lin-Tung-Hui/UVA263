#include <iostream>
#include <algorithm>
#ifdef GTEST
#include <gtest/gtest.h>
#endif

int compute_chain_length(std::string original_number)
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

int main(int argc, char **argv)
{

#ifdef GTEST
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
#endif

    std::string original_number;
    int chain_length;

    while (std::cin >> original_number) {
        if (std::stoi(original_number) == 0)
            break;
        std::cout << "Original number was " << original_number << std::endl;
        chain_length = compute_chain_length(original_number);
        std::cout << "Chain length " << chain_length << std::endl
                  << std::endl;
    }

    return 0;
}
