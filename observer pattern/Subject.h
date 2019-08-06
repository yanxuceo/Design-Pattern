#ifndef _SUBJECT_H
#define _SUBJECT_H

#include "Observer.h"
#include <memory>


class Subject 
{
public:
    Subject() {}
    virtual ~Subject() {}

    void attach(std::shared_ptr<Observer> observer);
    void detach(const int index);
    void notify();
    
    virtual const std::string getState() = 0;
    virtual void setState(const std::string &s) = 0;

    
private:  
    std::vector<std::shared_ptr<Observer>> _observers;
};

class RoadBroadCast : public Subject
{
public:  
    RoadBroadCast() {}
    ~RoadBroadCast() {}

    const std::string getState()
    {
        return _subject_state;
    }

    void setState(const std::string &s)
    {
        _subject_state = s;
    }


private:
    std::string _subject_state;
};

#endif

