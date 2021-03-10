#ifndef ROOMS_H
#define ROOMS_H
#include <stdexcept>

namespace gl{
           class Rooms {
               public:
                     string colour;
                     vector<string> rooms;
                     Rooms()
                     ~Rooms()
                     void setColour(string input)
                     string getColour() 
                     void addRooms(string input)
                     void printRooms()
  
	  };
  }
	
#endif
