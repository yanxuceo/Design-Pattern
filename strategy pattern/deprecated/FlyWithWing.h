#ifndef _FLYWITHWING_H
#define _FLYWITHWING_H

#include <iostream>
#include "FlyBehavior.h"


class FlyWithWing : public FlyBehavior
{
public:
    void fly()
    {
        std::cout << "I am flying with wings~" << std::endl;
    }    
};

#endif


