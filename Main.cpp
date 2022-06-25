// Included these files in order to use their functionalities.
#include "Ninja.h"
#include "Pirate.h"

using namespace std;

// Main function that will output all the gameplay which comes from all the other files.
int main()
{

    Character char0;
    char0.load();

    char choicee;

    // Simple game intro.
    cout << "**NINJAS** vs //PIRATES//\n\n";
    cout << "In this game of life or death, the ninja is known to move very swiftly\nand cautiously, while the pirate is known to force his way through the\ntoughest of situations and make calculated maneuvers.\n\n";
    cout << "?Each character has a unique set of abilities? Follow the instructions to find out more about them.?\n";

    /*Lines 19-22 output the help functions if a user wants to know more about the ninja or pirate before picking
    a character.*/
    Ninja nar;
    nar.Help();
    Pirate par;
    par.Help();

    // Simple input along with conditionals that allow user to choose a character.
    cout << "NOW...WHO WILL YOU BE? PRESS N/n for the ninja or P/p for the pirate:\n";
    cin >> choicee;
    if (choicee == 'N' || choicee == 'n')
    {
        cout << "Looks as if you like to take a cautious approach to life. We'll see how far the ninja gets you.\n\n";
    }
    else if (choicee == 'P' || choicee == 'p')
    {
        cout << "I like you. You are an aggressive gambler. Let's see how you can handle the pirate.\n\n";
    }

    /*Lines 34-41 output all the gameplay from the main files. I haven't used anything from the pirate file because
    I'll use that later to add even more exciting gameplay :)  */
    Character char1;
    char1.Talk("");

    Ninja nin1;
    nin1.firstpathway();

    Character char2;
    char2.Talk("", "");

    return 0;
}