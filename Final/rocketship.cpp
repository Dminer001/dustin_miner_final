/*
 * Name        : rocketship.cpp
 * Author      : Dustin Miner
 * Description : rocketship implementation file
 */
 


#include "rocketship.h"


RocketShip::RocketShip() 
{
    name_ = "RS NullPointer";
    fuel_ = 1000;
}

Rocketship::RocketShip(string newName, unsigned int newFuel)
{
    name_ = newName;
    fuel_ = newFuel;
}

void RocketShip::setName(string name) 
{
    name_ = name;
}

string RocketShip::getName() const
{
    return name_;
}

void RocketShip::setFuel(unsigned int fuel) 
{
    fuel_ = fuel;
}

unsigned int RocketShip::getFuel() const
{
    return fuel_;
}

void RocketShip::addFuelCell(unsigned int fuelAmount)
{
    fuelCells_.push_back(fuelAmount);
}
     
bool RocketShip::removeFuelCell(unsigned int cellNumber)
{
    if (cellNumber < fuelCells_.size())
    {
        fuelCells_.erase(fuelCells_.begin() + cellNumber);
        return true;
    } else
    return false;
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, 
                               unsigned int fuelAmount)
{
    if (cellNumber < fuelCells_.size())
    {
        fuelCells_.at(cellNumber) = fuelAmount;
        return true;
    } else
    return false;
}

string RocketShip::burnFuel(unsigned int cellNumber)
{
    string burned = "";
    if (cellNumber < fuelCells_.size())
    {
        for (unsigned int i = 0; i < fuelCells_.at(cellNumber); i++)
        {
            burned += "*";
        }
        fuelCells_.at(cellNumber) = 0;
    }
    std::cout << burned<<endl;
    return burned;
}
