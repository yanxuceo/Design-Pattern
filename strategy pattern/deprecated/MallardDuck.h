#ifndef _MALLARDDUCK_H
#define _MALLARDDUCK_H

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWing.h"


class MallardDuck : public Duck
{
public:
    MallardDuck() : Duck(new Quack, new FlyWithWing)
    {
        
    }

    virtual void display() override
    {
        std::cout << "I am a real Mallard duck." << std::endl;
    }
};


#endif

