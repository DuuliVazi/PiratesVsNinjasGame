// Have to include the ninja file in order to use functions from it. For example, line 57-58 and 72-73.
#include "Ninja.h"

using namespace std;

// Function to output the user's name and a greeting with their name after.
void Character::Talk(string stuffToSay)
{
    stuffToSay = "ENTER YOUR NAME BELOW:\n";
    cout << stuffToSay;
    cin >> Name2;
    cout << "Alright " << Name2 << ", good luck on this journey as it won't be an easy one. ---> TREAD LIGHTLY.\n\n";
}

/*Function to output the user's name once again. As you can see it's the same as the other talk function. Only
reason I created this one is to save the user's name for the DisplayStats function.*/
void Character::Talk(string name, string stuffToSay)
{
    stuffToSay = "ENTER YOUR NAME AGAIN TO SAVE IT TO THE GAME:\n";
    cout << stuffToSay;
    cin >> name;

    // Opening text file to write more info into it.
    fstream myNewFile;
    myNewFile.open("Newfile.txt", ios::app);
    if (!myNewFile)
    {
        cout << "Could not create file. " << endl;
        return;
    }
    else
    {
        cout << "Your name has been successfully saved to your game progress!\n";
    }

    // Adding user's name to the "Newfile.txt" file I opened up. And then closing the file.
    myNewFile << "Your name: " << name << '\n';
    myNewFile.close();

    // This saves their name to an array called stats and it's used just like it would be in the DisplayStats function.
    stats.push_back(name);
    for (string x : stats)
    {
        cout << "USER NAME: " << x << '\n';
    }
    return;
}

//Function created to allow user to load previous saved progress. 
void Character::load()
{
    char load;
    ifstream Newfile;
    char s[100], filename;

    cout << "* IF YOU WOULD LIKE TO LOAD UP YOUR PREVIOUS PROGRESS, PRESS P/p. OR, YOU CAN START A NEW GAME\nBY PRESSING ANY OTHER KEY: *\n";
    cin >> load;
    if (load == 'P' || load == 'p')
    {
        cout << "SIMPLY PRESS E/e TO ACCESS YOUR PREVIOUS SAVED FILE FROM THE LAST GAME:\n";

        cin >> filename;
        if (filename == 'E' || filename == 'e')
        {
            Newfile.open("Newfile.txt");
        }

        else
        {
            cout << "\nError in opening file..!!\n";
            exit(0);
        }
        cout << "\n";
        while (Newfile.eof() == 0)
        {
            Newfile >> s;
            cout << s << " ";
        }

        cout << "\n";
        Newfile.close();
    }
}

// Lines 32-40 are the setter and getter methods that grab the user's health.
void Character::set_Health(int H)
{
    Health = H;
}

int Character::getHealth()
{
    return Health;
}

// Attack function that returns hit points(which are bad) for the user.
int Character::attack(int Hitpts)
{
    Hitpts = 10;
    cout << "You have " << Hitpts << " hit points.\n";
    return Hitpts;
}

void Character::Help()
{
}

/*Function to Display user stats at the end of game. This is if the user chooses to go left and it's used in the ninja.cpp file.
If they go left(into the gulag), then they will expire.*/
void Character::DisplayStats(string Display)
{

    Display = "\nUSER STATS\n";
    cout << Display << "";
    Ninja nar;
    Health = nar.dam1();
    stats2.push_back(Health);

    for (int y : stats2)
    {
        cout << "--CHARACTER HAS EXPIRED--\n";
        cout << "END OF GAME HEALTH: " << y << '\n';
    }
}

/*Function to Display user stats at the end of game. This is if the user chooses to go right and it's used in the ninja.cpp file.
If they go right(run into the health boosting fruit), then they will increase their health and become a survivor.*/
void Character::DisplayStats2(string Display)
{
    Display = "\nUSER STATS\n";
    cout << Display << "";
    Ninja nar;
    Health = nar.dam2();
    stats2.push_back(Health);

    for (int y : stats2)
    {
        cout << "**YOU ARE A SURVIVOR!**\n";
        cout << "END OF GAME HEALTH: " << y << '\n';
    }
}
