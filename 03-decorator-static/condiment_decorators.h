#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H

#include <memory>
#include "beverages.h"

template<typename T>
class CondimentDecorator : T {
public:
    static_assert(std::is_base_of<Beverage, T>::value, "Template argument must be a Beverage");
    CondimentDecorator(std::string description, double cost) :
        T(), description(std::move(description)), cost(cost) {}
    ~CondimentDecorator() override = default;
    std::string getDescription() const override {
        return T::getDescription() + ", " + description;
    }
    double getCost() const override {
        return T::getCost() + cost;
    }
private:
    std::string description = "Unknown Condiment";
    double cost = 0.0;
};

template<typename T>
class Milk : public CondimentDecorator<T> {
public:
    Milk() : CondimentDecorator<T>("Milk", 0.10) {}
};

template<typename T>
class Mocha : public CondimentDecorator<T> {
public:
    Mocha() : CondimentDecorator<T>("Mocha", 0.20) {}
};

template<typename T>
class Soy : public CondimentDecorator<T> {
public:
    Soy() : CondimentDecorator<T>("Soy", 0.15) {}
};

template<typename T>
class Whip : public CondimentDecorator<T> {
public:
    Whip() : CondimentDecorator<T>("Whip", 0.10) {}
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H
