/*
 * Name        : activator.cpp
 * Author      : Dustin Miner
 * Description : activator implementation file
 */
 
#include "activator.h"

unsigned int Activator::getPrime (unsigned int whichPrime)
{
    unsigned int count = 1;
    unsigned int prime = 0;
    bool test = false;
    if (whichPrime == 1)
    {
        return 2;
    }
    for (unsigned int i = 3; i < 200000; i+=2)
    {
        for (unsigned int j = 2; j <= ceil(sqrt(i)); j++)
        {
            test = true;
            if ((i % j) == 0)
            {
                test = false;
                break;
            }
        }
        if (test == true)
        {
            count ++;
        if (count == whichPrime)
        {
            prime = i;
            break;
        }
        }
    }
    return prime;
}
  
unsigned int Activator::sumTheDigits(unsigned int value)
{
    //unsigned int num = value;
    unsigned int sum;
    while ( value > 0 )
    {
        sum += value%10;
        value /= 10;
    }
    if (sum > 9)
     sum = sumTheDigits(sum);
    return sum;
}

