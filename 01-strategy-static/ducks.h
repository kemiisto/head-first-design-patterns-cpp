#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H

#include "fly_behaviors.h"
#include "quack_behaviors.h"

/**
 * Literal class type that wraps a constexpr string.
 * Uses implicit conversion to allow templates to *seemingly* accept constant strings.
 */
template<size_t n>
struct StringLiteral {
    constexpr StringLiteral(const char (&str)[n]) {
        std::copy_n(str, n, value);
    }
    char value[n];
};

template <typename FB, typename QB, StringLiteral desc>
class Duck {
public:
    Duck() = default;
    virtual ~Duck() = default;

    void display() {
        std::cout << desc.value << std::endl;
    }

    void performFly() {
        flyBehavior.fly();
    }

    void performQuack() {
        quackBehavior.quack();
    }

    void swim() {
        std::cout << "All ducks float, even decoys!" << '\n';
    }

private:
    FB flyBehavior;
    QB quackBehavior;
};

using MallardDuck = Duck<FlyWithWings, Quack, "I'm a real Mallard duck">;
using ModelDuck = Duck<FlyNoWay, Quack, "I'm a model duck">;
using DecoyDuck = Duck<FlyNoWay, MuteQuack, "I'm a duck Decoy">;
using RubberDuck = Duck<FlyNoWay, Squeak, "I'm a rubber duckie">;

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_DUCKS_H
