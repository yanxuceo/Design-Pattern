#ifndef _QUACK_H
#define _QUACK_H

#include <iostream>
#include "QuackBehavior.h"

class Quack : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "Quack quack quack~" << std::endl;
    }

};


#endif

