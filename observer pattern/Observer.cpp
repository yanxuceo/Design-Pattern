#include "Observer.h"
#include "Subject.h"


void Vehicle::update(Subject *subject)
{
    _observer_state = subject->getState();
    std::cout << "Observer state updated." << std::endl;
}


