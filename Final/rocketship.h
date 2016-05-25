/*
 * Name        : rocketship.h
 * Author      : Dustin Miner
 * Description : rocketship header file
 */
 
#ifndef ROCKET_H
#define ROCKET_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
using std::endl;
using std::string;
using std::vector;
 
class RocketShip 
{
    public:
   
     RocketShip();
     
     RocketShip(string newName, unsigned int newFuel);
   
     void setName(string name);
   
     string getName() const;
   
     void setFuel(unsigned int fuel);
   
     unsigned int getFuel() const;
     
     void addFuelCell(unsigned int fuelAmount);
     
     bool removeFuelCell(unsigned int cellNumber);
     
     bool addFuelToCell(unsigned int cellNumber, 
                        unsigned int fuelAmount);
                        
     string burnFuel(unsigned int cellNumber);
     
   

    
    protected: 
    
     string name_;
    
     unsigned int fuel_;
     
     vector<unsigned int> fuelCells_;
    
};

#endif