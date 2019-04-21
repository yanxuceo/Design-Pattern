#ifndef _MODELDUCK_H
#define _MODELDUCK_H

#include "Duck.h"
#include "FlyNoWay.h"
#include "Quack.h"

class ModelDuck : public Duck
{
public:
    ModelDuck() : Duck(new Quack, new FlyNoWay)
    {

    }

    virtual void display()
    {
        std::cout << "I am a model duck." << std::endl;
    }

};

#endif

