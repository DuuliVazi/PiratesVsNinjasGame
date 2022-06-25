//Have to include header file to use all the functions inside of it.
#include "Pirate.h"

Pirate::Pirate()
{
}

//Attack function that returns Hitpts to use throughout future gameplay that will be added. 
int Pirate::attack(int Hitpts)
{
    Hitpts = 25;
    cout << "You have " << Hitpts << " hit points.\n";
    return Hitpts;
}

//Help function created so user can see pirate's unique abilities. 
void Pirate::Help()
{
    cout << "Press R/r to find out about the pirate, or any other key to continue.\n";
    char choice;
    cin >> choice;
    if (choice == 'R' || choice == 'r')
    {
        cout << "--The pirate is known for his agressive adaption skills.--\n\n";
    }
    else
    {
        return;
    }
}

//Function to be used later to make game even better.
void Pirate::UseSword()
{
    cout << "I am Swooshing my Sword!";
}