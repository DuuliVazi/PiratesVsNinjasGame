#include "GameStructure.h"

/*Class that controls all user speaking functionalities,
health, and stats.
*/

class Character : public Gamestructure
{
public:
    void Talk(string stuffToSay);
    void Talk(string name, string stuffToSay);
    void DisplayStats(string Display);
    void DisplayStats2(string Display);
    void set_Health(int H);
    virtual int attack(int Hitpts);
    void Help();
    void load();
    int getHealth();

private:
    vector<string> stats;
    vector<int> stats2;
    int Hitpts;
    int Health;
    string Name2;
    string name;
    string Display;
};
