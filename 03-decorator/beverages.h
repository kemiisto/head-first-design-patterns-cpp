#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_BEVERAGES_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_BEVERAGES_H

#include <string>
#include <utility>

class Beverage {
public:
    explicit Beverage(std::string description, double cost) :
        description(std::move(description)),
        cost(cost) {}
    virtual ~Beverage() = default;
    virtual std::string getDescription() const {
        return description;
    }
    virtual double getCost() const {
        return cost;
    };
protected:
    std::string description = "Unknown Beverage";
    double cost = 0.0;
};

class DarkRoast : public Beverage {
public:
    DarkRoast() : Beverage("Dark Roast Coffee", 0.99) {}
};

class Decaf : public Beverage {
public:
    Decaf() : Beverage("Decaf Coffee", 1.05) {}
};

class Espresso : public Beverage {
public:
    Espresso() : Beverage("Espresso", 1.99) {}
};

class HouseBlend : public Beverage {
public:
    HouseBlend() : Beverage("House Blend Coffee", 0.89) {}
};

#endif //HEAD_FIRST_DESIGN_PATTERNS_CPP_BEVERAGES_H
