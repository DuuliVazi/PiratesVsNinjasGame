/*All necessary libraries that allow basic functionality throughout the WHOLE code.
The rest of the files depend on this one that way you don't have to import these libraries again through
each file.*/
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <fstream>
#include <stdlib.h>

using namespace std;

//Gamestructure class that will be used to add more future gameplay.
class Gamestructure
{
public:
    virtual void Help();

private:
};