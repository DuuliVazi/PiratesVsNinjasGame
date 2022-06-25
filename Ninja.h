//Must add in order to make Ninja a subclass of Character.
#include "Character.h"



//Ninja class that holds all the function names that will be used to add more functionality inside of 'Ninja.cpp'.
class Ninja : public Character
{
public:
    void firstpathway();
    void secondpathway();
    void thirdpathway();
    int update_health(int init_H, int new_H);
    void ThrowStars();
    void save();
    int dam1();
    int dam2();
    int attack(int Hitpts);
    void Help();
    Ninja();

private:
    vector<int> prog;
    char choice[20];
    int Hitpts;
    int init_H;
    int new_H;
};