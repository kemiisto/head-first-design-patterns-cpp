#include <iostream>

#include "ducks.h"

int main() {
    std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
    std::unique_ptr<Duck> rubberDuckie = std::make_unique<RubberDuck>();
    std::unique_ptr<Duck> decoy = std::make_unique<DecoyDuck>();
    std::unique_ptr<Duck> model = std::make_unique<ModelDuck>();

    mallard->performQuack();
    rubberDuckie->performQuack();
    decoy->performQuack();

    model->performFly();
    model->setFlyBehavior(std::make_unique<FlyRocketPowered>());
    model->performFly();

    return EXIT_SUCCESS;
}
