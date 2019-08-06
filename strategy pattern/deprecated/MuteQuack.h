#ifndef _MUTEQUACK_H
#define _MUTEQUACK_H

#include <iostream>
#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "I am Mr.Silence..." << std::endl;
    }

};


#endif

