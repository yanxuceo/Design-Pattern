# Design Pattern code example in C++

I am learning design pattern with the book *Head First Design Patterns*, but all the code examples in it are given in Java. Here, I'm gonna translate them into my C++ version.


## Observer Pattern
Observer defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. The pattern has behavioral purpose and applies to the objects.

###Example:
In my demo, I assume a RoadBroadCast as the Subject, which is used to broadcast the real-time road condition to traffic participants that registered as Observers to the Subject. 
