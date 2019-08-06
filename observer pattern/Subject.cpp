#include "Subject.h"
#include "Observer.h"


void Subject::attach(std::shared_ptr<Observer> observer)
{
    _observers.push_back(observer);
} 


void Subject::detach(const int index)
{
     _observers.erase(_observers.begin() + index);
}


void Subject::notify()
{
    for(auto i : _observers)
    {
        i->update(this);
    }
}

