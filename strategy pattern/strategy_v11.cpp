#include <iostream>
#include <memory>
#include <string>

// interface definition for calculate method
class Discount {
public:    
    virtual double calculate(double price) = 0;
};

// student method implementation
class StudentDiscount : public Discount {
public:
    virtual double calculate(double price)
    {
        std::cout << "It's student ticket. " << std::endl;
        return price * 0.8;
    }    

    ~StudentDiscount()
    {
        std::cout << "Student Mission finished. " << std::endl;
    }
};

// children method implementation
class ChildrenDiscount : public Discount {
public:
    virtual double calculate(double price)
    {
        std::cout << "It's a child ticket. " << std::endl;
        return price-10;
    }

     ~ChildrenDiscount()
    {
        std::cout << "Child Mission finished. " << std::endl;
    }
};

// VIP method implementation
class VIPDiscount : public Discount {
public:
    VIPDiscount(std::string name)
        : _name(name)
    {}

    virtual double calculate(double price)
    {
        std::cout << "It's VIP ticket. " << std::endl;
        return price*0.5;
    }

    std::string getName() const
    {
        return _name;
    }

    ~VIPDiscount()
    {
        std::cout << "VIP Mission finished. " << std::endl;
    }

private:
    std::string _name;
};


class MovieTicket {
public:
    void setPrice(double price)
    {
        _price = price;
    }

    void setDiscount(std::shared_ptr<Discount> discount)
    {
        _discount = discount;
    }

    double getPrice()
    {
        return _discount->calculate(_price);
    }

private:
    double _price;
    std::shared_ptr<Discount>  _discount; 
};


int main()
{
    MovieTicket movieticket;
    movieticket.setPrice(50.0);

    std::shared_ptr<VIPDiscount> vip = std::make_shared<VIPDiscount>("YaoMing");
    std::shared_ptr<ChildrenDiscount> child = std::make_shared<ChildrenDiscount>();
    std::shared_ptr<StudentDiscount> student = std::make_shared<StudentDiscount>();
   
    movieticket.setDiscount(vip);
    std::cout << movieticket.getPrice() << std::endl;

    // just to validate the std::move semantic
    if(vip == nullptr)
    {
        std::cout << "now vip is gone! " << std::endl;
    }

    movieticket.setDiscount(child);
    std::cout << movieticket.getPrice() << std::endl;

    movieticket.setDiscount(student);
    std::cout << movieticket.getPrice() << std::endl;

    return 0;
}


