#include "libs/helpers.h"
#include <iostream>
#include <string>

int main()
{
     std::cout << "\n\n Hack Quinton with a potato\n";
     std::cout << "What is your name?\n: ";
     
     

    std::string name = getString();
    
    
    std::cout << "\nYou are in a programming thing with Quinton.\n";
    std::cout << "his pitiful attempts at humor accompanying his shrill\n";
    std::cout << "obnoxious voice is making you nauseous.\n\n";
    std::cout << "What do you do?\n";
    std::cout << "1.) Hack Him\n";
    std::cout << "2.) Punch Him\n";
    std::cout << "3.) Walk away and never return\n";
    std::cout << "4.) Endure\n";
    std::cout << ": ";

    int choice = getInteger(1, 4);
    std::cout << "\n";
    
    if (choice == 1)
    {
        std::cout << "You successfully hack Quinton's low-grade computer and it goes up in flames, consuming him as well.\n";
        std::cout << "\n ** Congratulations " << name << "! YOU WIN! **\n";
    }
    if (choice == 2)
    {
        std::cout << "Your fist collides with Quinton's face, shattering his nose and eye sockets, he shuts up.\n";
        std::cout << "\n ** Way to go " << name << ". YOU WIN! **\n";
    }
    
    if (choice == 3)
    {
        std::cout << "You give up with his antics and depart, leaving the others to suffer his wrath.\n";
        std::cout << "\n ** You didn't win, but you didn't lose. You gave up " << name<< " how PATHETIC! **\n";
    }
    if (choice == 4)
    {
        std::cout << "You endure the insufferable little prick's shenanigans, gritting your teeth in agony.\n";
        std::cout << "\n ** His incessant rambling causes you so much agony, your head explodes.\n" "\n** YOU LOSE! **\n";
    }
    
     return 0;
}