#include <iostream>
#include <vector>
#include <string>
#include <Rooms.h>

namespace gl;
 Rooms
 {
    string colour;
    vector<string> rooms;
    Rooms()
    {}
    ~Rooms()
    {}
    void setColour(string input)
    {
        colour = input;
    }
    string getColour() { return colour; }

    void addRooms(string input)
    {
        rooms.push_back(input);
    }
    void printRooms()
    {
        cout << colour << " ";
        for (int i = 0; i < rooms.size(); ++i)
        {
            cout << rooms[i]<<" ";
        }

        cout << endl;
    }

};
