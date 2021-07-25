#include <iostream>

#include <memory>

#include "ducks.h"

int main() {
    auto mallard = std::make_unique<MallardDuck>();
    auto rubberDuckie = std::make_unique<RubberDuck>();
    auto decoy = std::make_unique<DecoyDuck>();
    auto model = std::make_unique<ModelDuck>();

    mallard->display();
    mallard->performQuack();

    rubberDuckie->display();
    rubberDuckie->performQuack();

    decoy->display();
    decoy->performQuack();

    model->display();
    model->performFly();

    return EXIT_SUCCESS;
}
