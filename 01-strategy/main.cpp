#include <iostream>

#include "ducks.h"

int main() {
    std::unique_ptr<Duck> mallard = std::make_unique<MallardDuck>();
    // At this location the original Java code uses a Java-specific feature, namely,
    // functional interfaces FlyBehavior and QuackBehavior are implemented by lambda expressions.
    // One can read more about this feature of the Java programming language here:
    // http://tutorials.jenkov.com/java-functional-programming/functional-interfaces.html
    // What it important for us is that this feature has no analogue in C++, thus,
    // the corresponding code is ышьздн absent here in C++ implementation.
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
