/*
 * A program that finds out how many multiples of three exist between two
 * numbers. It includes the lower and upper bounding numbers.
 */

#include "libs/helpers.h"
#include <cstdio>

int main()
{
    printf("Enter a number: ");
    int lowerNumber = getInteger();

    printf("Enter a bigger number: ");
    int upperNumber = getInteger(lowerNumber + 1);

    int multiplesOfThree = 0;
    int counter = lowerNumber;
    while (counter <= upperNumber)
    {
        if (counter % 3 == 0)
        {
            multiplesOfThree++;
        }
        counter++;
    }

    printf(
        "There are %d multiples of three between %d and %d\n",
        multiplesOfThree,
        lowerNumber,
        upperNumber
    );
}