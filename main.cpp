#include <iostream>
#include <vector>
#include "Rooms.h"
#include <string.>

using namespace gl;

int Rooms::idCount = 0;

int main()
{
    vector<Rooms>names;

    Rooms r1;
    r1.setColour("Red:");
    r1.addRooms("Kitchen");
    r1.addRooms("Bedroom");
    r1.addRooms("Garage");
    r1.getColour();
    r1.printRooms();

    Rooms r2;
    r2.setColour("Blue:");
    r2.addRooms("Nursery");
    r2.addRooms("Games room");
    r2.addRooms("Shower");
    names.push_back(r2);

    for(int i=0; i<names.size(); ++i)
    {
        names[i].printRooms();
    }
    return 0;
}
