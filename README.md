# Design Pattern code example in C++

I am learning design pattern with the book *Head First Design Patterns*, but all the code examples in it are given in Java. Here, I'm gonna translate them into my C++ version.


## Observer Pattern
Observer defines a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically. The pattern has behavioral purpose and applies to the objects.

*Example*:
In my demo, I assume a RoadBroadCast as the Subject, which is used to broadcast the real-time road condition to traffic participants that registered as Observers to the Subject. 


## Strategy Pattern

Strategy defines a family of algorithms, encapsulates each one, and makes them interchangeable. It lets the algorithm vary independently from clients that use it. The pattern has behavioral purpose and applies to the objects.

*Example*:
This demo refers to this blog [CSDN Blog](https://blog.csdn.net/lovelion/article/details/7818983), which is about to design a Cinema ticketing system. In this scenario, the ticket price could vary depending on the audience type, e.g children, student or VIP. 


## Template Method Pattern

Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.