#ifndef _SQUEAK_H
#define _SQUEAK_H

#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "Squeak squeak squeak~" << std::endl;
    }

};


#endif

