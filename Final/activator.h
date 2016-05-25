/*
 * Name        : activator.h
 * Author      : Dustin Miner
 * Description : activator header file
 */
#ifndef ACTIVATOR_H
#define ACTIVATOR_H

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
using std::endl;
using std::string;
using std::vector;
 
class Activator
{
public:
unsigned int getPrime (unsigned int whichPrime);
  
unsigned int sumTheDigits(unsigned int value);
};


#endif