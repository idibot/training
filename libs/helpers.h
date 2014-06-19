#ifndef HELPERS_H
#define HELPERS_H

#include <climits>
#include <string>

/* Returns a non-zero length string from standard input with whitespace trimmed
 * from the beginning and end */
std::string getString();

/* Returns an integer with a value between min and max (inclusive) from standard
 * input */
int getInteger(int min=INT_MIN, int max=INT_MAX);

/* Returns a single letter from standard input. If ignoreCase is true, the
 * letter returned will always be upper cased. Non-letter values (numbers or
 * symbols) will never be returned, even if they exist between min and max */
std::string getLetter(bool ignoreCase=true, std::string min="A", std::string max="z");
std::string getLetter(std::string min, std::string max);

/* Returns a floating point number from standard input */
double getDecimal(double min=LONG_MIN, double max=LONG_MAX);

#endif