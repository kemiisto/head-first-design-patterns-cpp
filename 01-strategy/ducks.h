#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H

#include <memory>

#include "fly_behaviors.h"
#include "quack_behaviors.h"

class Duck {
public:
    Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior) :
        flyBehavior(std::move(flyBehavior)),
        quackBehavior(std::move(quackBehavior)) {}

    virtual ~Duck() = default;

    void setFlyBehavior(std::unique_ptr<FlyBehavior> fb) {
        flyBehavior = std::move(fb);
    }

    void setQuackBehavior(std::unique_ptr<QuackBehavior> qb) {
        quackBehavior = std::move(qb);
    }

    virtual void display() = 0;

    void performFly() {
        flyBehavior->fly();
    }

    void performQuack() {
        quackBehavior->quack();
    }

    void swim() {
        std::cout << "All ducks float, even decoys!" << '\n';
    }

private:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;
};

class MallardDuck final : public Duck {
public:
    MallardDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {}

    void display() override {
        std::cout << "I'm a real Mallard duck" << '\n';
    }
};

class ModelDuck final : public Duck {
public:
    ModelDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Quack>()) {}

    void display() override {
        std::cout << "I'm a model duck" << '\n';
    }
};

class DecoyDuck final : public Duck {
public:
    DecoyDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) {}

    void display() override {
        std::cout << "I'm a duck Decoy" << '\n';
    }
};

class RubberDuck final : public Duck {
public:
    RubberDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) {}

    void display() override {
        std::cout << "I'm a rubber duckie" << '\n';
    }
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H
