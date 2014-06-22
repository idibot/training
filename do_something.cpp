#include <string>
#include <vector>
#include <unordered_map>

int main()
{
    // You declare a variable by telling C++ what type it is, and what its name is
    int var;
    // Type is "int", which means a number without decimal places
    // Name is "var". You can now reference "var" other places below

    // You can also assign values to a variable you have declared.
    // Good variable assignments
    bool a = true;
    int b = 0;
    double c = 1.234;
    std::string d = "Hi";

    bool e = a;

    // Mathematical Operators
    // (Addition) +
    // (Subtraction) -
    // (Multiplication) *
    // (Division) /
    // (Remainder) % - (7 % 5 == 2)
    int f = b + 2;
    double g = c - 3.14159;

    std::string h = d + " there"; // Using + on strings joins them together


    // Bad variable assignments
    //int i = "0"; // syntax error: assigning a string to a numerical type
    //double j = "1.234";

    int k = 1.113; // double value will be truncated to 1

    bool l = 0; // will be interpreted as false


    // Logical Operators
    // (NOT) ! - True if the value it modifies is false
    ! false == true;

    // (OR) || - True if at least one argument before or after it is true
    true || true == true;
    true || false == true;
    false || true == true;
    false || false == false;

    // (AND) && - True if both arguments before and after it are true
    true && true == true;
    true && false == false;
    false && true == false;
    false && false == false;


    // Comparison operators
    // == - True if the arguments before and after it are equivalent
    // < - True if the argument before it is less than the argument after it
    // <= - True if the argument before it is less than or equal to the argument after it
    // > - True if the argument before it is greater than the argument after it
    // >= - True if the argument before it is greater than or equal to the argument after it
    // != - True if the arguments before and after it are not equal

    // Branching
    // You often need the computer to take a course of action based on current conditions
    // The easiest way to do this in C++ is to use the if statement

    if (true)
    {
        // This block runs.
    }

    if (false)
    {
        // This block does not run
    }

    // You can also use "else" after an if statement if you want to do something if the condition is not true
    if (a >= 0)
    {
        a = a * 2;
    }
    else
    {
        a = a + 2;
    }
    // What is the value of a now?


    // Scope:
    // Variable are only available in blocks where they have been declared.
    // Accessing a block before it is declared or after it has expired is an error
    if (true)
    {
        int m = 10; // Declared inside the curly braces
    }
    // accessing m after the matching brace closes is an error
    //int n = m; // syntax error: Unknown variable "m"


    // Containers
    // Sometimes you want to group multiple values together, but you don't know exactly how many.
    // Rather than do something stupid like int val1, val2, val3, ..., use STL containers
    // A vector can hold a list of variables:
    std::vector<int> n = {1, 2, 3, 4};
    n.push_back(5); // Add 5 to the end of the list

    // A map can hold values keyed to another value
    std::unordered_map<std::string, std::string> o = {{"Hi", "Hello"}, {"Sup?", "What is new?"}};
    o["lol"] = "That was very humorous.";


    return 0;
}