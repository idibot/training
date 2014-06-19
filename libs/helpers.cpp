#include "helpers.h"

#include <boost/algorithm/string.hpp>
#include <iostream>
#include <sstream>

std::string getString()
{
    std::string value;

    while (true)
    {

        std::getline(std::cin, value);

        boost::algorithm::trim(value);

        if (value.empty() == false)
        {
            return value;
        }

        std::cout << "Please enter a string: ";
    };


    return value;
}

template <typename t> t getInput(t min, t max, std::string error)
{
    std::string input;
    t value;

    while (true)
    {
        input = getString();

        std::istringstream maybeValid(input);

        if (maybeValid >> value && maybeValid.eof())
        {
            if (value >= min && value <= max)
            {
                return value;
            }
        }

        std::cout << error << ". Please try again: ";
    }
}

int getInteger(int min, int max)
{
    return getInput(min, max, "That is not a valid number");
}

std::string getLetter(bool ignoreCase, std::string min, std::string max)
{
    std::string value;

    if (min < "A")
    {
        min = "A";
    }

    if (max > "z")
    {
        max = "z";
    }

    if (ignoreCase)
    {
        min = toupper(min[0]);
        max = toupper(max[0]);
    }

    while (true)
    {
        value = getString();

        if (value.length() == 1)
        {
            if (ignoreCase)
            {
                value = toupper(value[0]);
            }
            bool isSymbol = (value > "Z" && value < "a");

            if (!isSymbol && value >= min && value <= max)
            {
                return value;
            }
        }

        std::cout << "That is not a valid letter. Please try again: ";
    }
}
std::string getLetter(std::string min, std::string max)
{
    return getLetter(false, min, max);
}

double getDecimal(double min, double max)
{
    return getInput(min, max, "That is not a valid number");
}