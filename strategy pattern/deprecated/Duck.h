#ifndef _DUCK_H
#define _DUCK_H

#include <iostream>

#include "QuackBehavior.h"
#include "FlyBehavior.h"


class Duck
{
public:
    Duck(QuackBehavior *qb, FlyBehavior *fb)
     : qb_ptr(qb),fb_ptr(fb)
    {

    }

    void performQuack()
    {
        qb_ptr->quack();
    }   

    void performFly()
    {
        fb_ptr->fly();
    }

    void setFlyBehavior(FlyBehavior *fb)
    {
        fb_ptr = fb;
    }

    void setQuackBehavior(QuackBehavior *qb)
    {
        qb_ptr = qb;
    }

    void swim()
    {
        std::cout << "All duck float, even decoys!" << std::endl;
    }

    virtual void display()
    {
        std::cout << "I am all the Duck's father." << std::endl; 
    }

    ~Duck()
    {
        delete qb_ptr;
        delete fb_ptr;
    }

protected:
    QuackBehavior *qb_ptr;
    FlyBehavior   *fb_ptr;
};

#endif

