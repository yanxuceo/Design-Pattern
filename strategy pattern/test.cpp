#include "MallardDuck.h"
#include "ModelDuck.h"


int main()
{
    Duck *mallard = new MallardDuck();
    Duck *model = new ModelDuck();

    mallard->display();
    mallard->performFly();
    mallard->performQuack();

    model->display();
    model->performFly();
    model->performQuack();

    return 0;
}


