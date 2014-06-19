/* A text-based adventure */

#include "libs/helpers.h"
#include <iostream>
#include <string>

int main()
{
    std::cout << "\n\n           ** AN AWESOME ADVENTURE GAME **\n\n";
    std::cout << "What is your name?\n: ";

    std::string name = getString();

    std::cout << "\nYou are in a forest clearing. The birds chirp happily, and in the distance\n";
    std::cout << "you can hear the sound of children playing. Suddenly, a hoard of undead\n";
    std::cout << "warriors erupt from the ground and charge you.\n\n";
    std::cout << "What do you do?\n";
    std::cout << "1.) Win\n";
    std::cout << "2.) Lose\n";
    std::cout << ": ";

    int choice = getInteger(1, 2);
    std::cout << "\n";

    if (choice == 1)
    {
        std::cout << "You pull out your chainsaw and mow down the the zombie hoard. The day is saved!\n";
        std::cout << "\n ** Congratulations " << name << "! YOU WIN! **\n";
    }
    else
    {
        std::cout << "The zombie hoard dismembers you and eats your brain, then attacks the village.\n";
        std::cout << "\n ** Better luck next time " << name << ". YOU LOSE! **\n";
    }

    std::cout << "\n\n";

    return 0;
}
