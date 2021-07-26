#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H

#include <memory>
#include "beverages.h"

class CondimentDecorator : public Beverage {
public:
    explicit CondimentDecorator(std::unique_ptr<Beverage> beverage, std::string description, double cost) :
        Beverage(std::move(description), cost),
        beverage(std::move(beverage)) {}
    ~CondimentDecorator() override = default;
    std::string getDescription() const override {
        return beverage->getDescription() + ", " + description;
    }
    double getCost() const override {
        return beverage->getCost() + cost;
    }
protected:
    std::unique_ptr<Beverage> beverage;
};

class Milk : public CondimentDecorator {
public:
    explicit Milk(std::unique_ptr<Beverage> beverage) :
        CondimentDecorator(std::move(beverage), "Milk", 0.10) {}
};

class Mocha : public CondimentDecorator {
public:
    explicit Mocha(std::unique_ptr<Beverage> beverage) :
        CondimentDecorator(std::move(beverage), "Mocha", 0.20) {}
};

class Soy : public CondimentDecorator {
public:
    explicit Soy(std::unique_ptr<Beverage> beverage) :
        CondimentDecorator(std::move(beverage), "Soy", 0.15) {}
};

class Whip : public CondimentDecorator {
public:
    explicit Whip(std::unique_ptr<Beverage> beverage) :
        CondimentDecorator(std::move(beverage), "Whip", 0.10) {}
};

#endif //HEAD_FIRST_DESIGN_PATTERNS_CPP_CONDIMENT_DECORATORS_H
