/*
 * Name        : specialrocketship.h
 * Author      : Dustin Miner
 * Description : rocketship header file
 */
 
#ifndef SROCKET_H
#define SROCKET_H

#include "rocketship.h"
class SpecialRocketShip : public RocketShip
{
    public:
    SpecialRocketShip();
    
    void setCloaked(bool cloaked);
    
    bool getCloaked() const;
    
    private:
    bool cloaked_;
    
    
};

#endif