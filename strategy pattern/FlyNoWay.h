#ifndef _FLYNOWAY_H
#define _FLYNOWAY_H

#include <iostream>
#include "FlyBehavior.h"


class FlyNoWay : public FlyBehavior
{
public:
    void fly()
    {
        std::cout << "I am a fucking living ground bird!" << std::endl;
    }    
};

#endif


