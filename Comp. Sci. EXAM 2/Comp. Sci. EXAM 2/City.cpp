//
//  City.cpp
//  Comp. Sci. EXAM 2
//
//  Created by Eric Klicker on 11/10/16.
//  Copyright © 2016 Eric Klicker. All rights reserved.
//

#include "City.hpp"

City::City(string cityName)
{
    //creating file for each city
    name = cityName;
    //each city will have their own "txt" file
    string fileName = cityName + ".txt";
    ifstream fileIO(fileName);
    if (fileIO.fail())
    {
        //if the file doesnt exist it will read that it cant open
        ofstream newFile(fileName);
        if(!newFile)
            cout << "Error, could not open file" << endl;
        newFile.close();
    }
    else
    {
        //if the file can be opened, it will input these vaules for the citizen
        int id;
        while(!fileIO.eof())
        {
            fileIO >> id >> fname >>lname >> color;
        }
    }
    fileIO.close();
    }
    
}
~City()
{
   //save the population for the city to the file for that city
    //i.e. spokane is saved to spokane.txt
    
}

//return functions to call later
string City:: getCityName()
{
    return name;
    
}
int City::populationSize()
{
    
    return numberOfCitizens;
}

Citizen* getCitizenAtIndex(int index)
{
    //aquire a citizen at a certain number
    
}
void Citizen::addCitizen(Citizen* citizen)
{
  //add a citizen
    //need to copy them so it doesnt get overrun or underrun
    
}

Citizen* getCitizenWithId(int id)
{
    
    
}
vector<Citizen*> getCitizensForFavoriteColor(string color)

{
    //make a for loop for a citizen that compares their favorite color. returns citizen
}







