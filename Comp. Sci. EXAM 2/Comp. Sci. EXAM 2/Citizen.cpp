//
//  Citizen.cpp
//  Comp. Sci. EXAM 2
//
//  Created by Eric Klicker on 11/10/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include "Citizen.hpp"

Citizen::Citizen(int id,string firstName, string lastName, string color)
{
    //change variables to reflect new values
    id = ID;
    lName = LNAME;
    
    
    
}
//create functions to return values and strings
string Citizen::getFirstName()
{
    
    return fName;
}
string Citizen::getLastName()
{

    return lName;
}
int Citizen::getId()
{
    
    return id;
}
string Citizen::getFavoriteColor()
{
    
    return color;
}
void Citizen::setFavoriteColor(string color)
{
    color = newColor;
    
}