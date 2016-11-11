//
//  Citizen.hpp
//  Comp. Sci. EXAM 2
//
//  Created by Eric Klicker on 11/10/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#ifndef Citizen_hpp
#define Citizen_hpp
#include <stdio.h>
#include "City.hpp"
#include <string>
using namespace std;

//I need to create functions with pointers that allows me to add citizens and read in files based on the city they are from. Each city will have their own text file. From there a citizen can be stored and compared to other citizens based on color. When a citizen is added to a city they need to be deleted because they can't be in 2 different cities thus using a new and delete to ensure that if a citizen is created they are then deleted.

class Citizen
{
public:
    
    //Creates a new Citizen object with the passed in
    //id, name, and favorite color
    //Once a citizen is created, you can't change their id or name
    //but you can change their favorite color
    Citizen(int id,string firstName, string lastName, string color);
    
    //Creates a new Citizen object by copying data from the
    //passed in citizen
    Citizen(Citizen* citizen);
    
    //Returns the first name of this citizen
    string getFirstName();
    
    //Returns the last name of this citizen
    string getLastName();
    
    //Returns the id for this citizen
    int getId();
    
    //Returns the favorite color for this citizen
    string getFavoriteColor();
    
    //Sets the favorite color for this citizen
    void setFavoriteColor(string color);
    
    
private:
    int id;
    string fName;
    string lName;
    string color;
    
    
};



#endif /* Citizen_hpp */
