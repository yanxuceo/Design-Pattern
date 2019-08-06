#ifndef _OBSERVER_H
#define _OBSERVER_H

#include <iostream>
#include <vector>
#include <memory>


class Subject;

class Observer
{
public:
    virtual ~Observer() {}

    virtual const std::string getState() = 0;
    virtual void update(Subject *subject) = 0;
};

class Vehicle : public Observer
{
public:
    Vehicle(const std::string &state)
        : _observer_state(state)
    {
    }

    ~Vehicle() 
    {
    }

    const std::string getState()
    {
        return _observer_state;
    }

    void update(Subject *subject);

private:
    std::string _observer_state;    
};


#endif
