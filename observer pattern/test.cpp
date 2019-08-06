#include "Observer.h"
#include "Subject.h"
#include <memory>


int main()
{
    std::shared_ptr<Observer> vehicle1{std::make_shared<Vehicle>("Clear Road")};
    std::shared_ptr<Observer> vehicle2{std::make_shared<Vehicle>("Clear Road")};


    std::cout << "vehicle1 receives: " << vehicle1->getState() << std::endl;
    std::cout << "vehicle1 receives: " << vehicle2->getState() << std::endl;


    std::shared_ptr<Subject> subject{std::make_shared<RoadBroadCast>()};
    subject->attach(vehicle1);
    subject->attach(vehicle2);

    subject->setState("Car Collision ahead！");
    subject->notify();

    std::cout << "vehicle1 receives: " << vehicle1->getState() << std::endl;
    std::cout << "vehicle2 receives: " << vehicle2->getState() << std::endl;

    
    subject->detach(1);
    subject->setState("119 comes to clear the road！");
    subject->notify();

    std::cout << "vehicle1 receives: " << vehicle1->getState() << std::endl;
    std::cout << "vehicle2 receives: " << vehicle2->getState() << std::endl;

    return 0;
}