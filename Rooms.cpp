#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class Rooms
{
public:
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
