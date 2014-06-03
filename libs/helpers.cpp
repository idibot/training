#include "helpers.h"

#include <iostream>
#include <sstream>
#include <string>

int getInteger(int min, int max)
{
    std::string input;
    int value;

    while (true)
    {
        std::getline(std::cin, input);

        std::istringstream maybeNumber(input);

        if (maybeNumber >> value >> std::ws && maybeNumber.eof())
        {
            if (value >= min && value <= max)
            {
                return value;
            }
        }

        std::cout << "That is not a valid number. Please try again: ";
    }

    return value;
}