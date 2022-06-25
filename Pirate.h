/*For some really odd reason, I can't make this a subclass of Character. Whenever I try to do this...
(class Pirate : Public Character), and ONLY (#include 'Character.h'), it gives me a compile error every
single time and idk why. So, I have to re-import all these libraries again like I did with 'Gamestructure.h'*/
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/*Pirate class, which is not a subclass of Character, that holds all the function names to be used to add more functionality
inside 'Pirate.cpp'*/
class Pirate
{
public:
    void firstpathway();
    void secondpathway();
    void thirdpathway();
    void UseSword();
    int attack(int Hitpts);
    void Help();
    Pirate();

private:
    int Hitpts;
};