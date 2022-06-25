// Have to include header file to use all the functions inside of it.
#include "Ninja.h"

Ninja::Ninja()
{
}

// Health function so that I can update the health based on user's decisions throughout the ninja firstpathway() gameplay.
int Ninja::update_health(int init_H, int new_H)
{
    init_H = 0;
    new_H = init_H - new_H;
    return new_H;
}

// Functions on lines 17-25 were created in order to retrieve the updated health from the function above.
int Ninja::dam1()
{
    return update_health(0, 10);
}

int Ninja::dam2()
{
    return update_health(0, -20);
}

// Attack function that returns Hitpts to use throughout firstpathway() gameplay.
int Ninja::attack(int Hitpts)
{
    return Hitpts;
}

// Help function created so user can see ninja's unique abilities.
void Ninja::Help()
{
    cout << "Press J/j to find out about the ninja, or any other key to continue.\n";
    char extra;
    cin >> extra;
    if (extra == 'J' || extra == 'j')
    {
        cout << "--The ninja can move quick without being harmed or detected.--\n\n";
    }
    else
    {
        return;
    }
}

// All the gameplay that I have within my code right now. Well along with whatever else's in the int main() function.
void Ninja::firstpathway()
{

    //Opening "Newfile.txt" file to write initial content into it.
    fstream myNewFile;
    myNewFile.open("Newfile.txt", ios::out);
    if (!myNewFile)
    {
        cout << "Could not create file. " << endl;
        return;
    }
    else
    {
        cout << "A new game file was successfully created for you!\n";
    }

    for (int i = 0; i < 20; i++)
    {
        cout << "Choose which way you want to start off. Press L or R:\n";
        cin >> choice;
        if (choice[i] == 'L' || choice[i] == 'l')
        {
            cout << "You chose " << choice[i] << ".\n";
            cout << "By going left, you opted into the gulag. There are no rules in fighting so defend yourself the best way you can. Good luck!\n";
            cout << "Your initial health was 0. You collected " << attack(10) << " hit points.\n";
            cout << "Your new health is " << dam1() << '\n';
            DisplayStats("");

            char save;
            cout << "To save your progress, press S. If you would rather continue without saving, press any other button:\n";
            cin >> save;
            if (save == 'S' || save == 's')
            {
                //If user decides to save progress, then add all their stats to the "Newfile.txt" file.
                myNewFile << "On your last go around, you chose to go " << choice << "\n\n";
                myNewFile << "And your ending health was " << dam1() << "\n\n";
                //Closing the file once putting user stats into it.
                myNewFile.close();
                cout << "File saved and closed successfully!\n";
            }
            return;
        }
        else if (choice[i] == 'R' || choice[i] == 'r')
        {
            cout << "You chose " << choice[i] << ".\n";
            cout << "Going right led you to the health boosting fruit. Keep on keeping on!\n";
            cout << "Your initial health was 0. You collected " << attack(0) << " hit points.\n";
            cout << "Your new health is " << dam2() << '\n';
            DisplayStats2("");

            char save;
            cout << "To save your progress, press S. If you would rather continue without saving, press any other button:\n";
            cin >> save;
            if (save == 'S' || save == 's')
            {
                //If user decides to save progress, then add all their stats to the "Newfile.txt" file.
                myNewFile << "On your last go around, you chose to go " << choice << '\n';
                myNewFile << "And your ending health was " << dam1() << '\n';
                //Closing the file once putting user stats into it.
                myNewFile.close();
                cout << "File saved and closed successfully!\n";
            }
            return;
        }
    }
}

// Lines 79-90 will be used later to make this a suuuper sick game.
void Ninja::secondpathway()
{
}

void Ninja::thirdpathway()
{
}

void Ninja::ThrowStars()
{
    cout << "I am throwing stars!";
}