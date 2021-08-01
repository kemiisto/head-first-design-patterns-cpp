#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZAS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZAS_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>

class Pizza {
public:
    Pizza(std::string  name, std::string  dough, std::string  sauce, std::vector<std::string>  toppings) :
          name(std::move(name)),
          dough(std::move(dough)),
          sauce(std::move(sauce)),
          toppings(std::move(toppings)) {}
    virtual ~Pizza() = default;
    const std::string& getName() const {
        return name;
    }
    void prepare() {
        std::cout << "Preparing " << name << std::endl;
    }
    void bake() {
        std::cout << "Baking " << name << std::endl;
    }
    void cut() {
        std::cout << "Cutting " << name << std::endl;
    }
    void box() {
        std::cout << "Boxing " << name << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const Pizza& pizza);
private:
    std::string name;
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;
};

std::ostream& operator<<(std::ostream& os, const Pizza& pizza) {
    os << "---- " << pizza.name << " ----\n";
    os << pizza.dough << '\n';
    os << pizza.sauce << '\n';
    for (const auto& topping : pizza.toppings) {
        os << topping << '\n';
    }
    return os;
}

class CheesePizza : public Pizza {
public:
    CheesePizza() : Pizza("Cheese Pizza", "Regular Crust", "Marinara Pizza Sauce",
                          { "Fresh Mozzarella", "Parmesan" }) {}
};

class ClamPizza : public Pizza {
public:
    ClamPizza() : Pizza("Clam Pizza", "Thin crust", "White garlic sauce",
                        { "Clams", "Grated parmesan cheese" }) {}
};

class PepperoniPizza : public Pizza {
public:
    PepperoniPizza() : Pizza("Pepperoni Pizza", "Crust", "Marinara sauce",
                             { "Sliced Pepperoni", "Sliced Onion", "Grated parmesan cheese" }) {}
};

class VeggiePizza : public Pizza {
public:
    VeggiePizza() : Pizza("Veggie Pizza", "Crust", "Marinara sauce",
                          { "Shredded mozzarella", "Grated parmesan", "Diced onion",
                            "Sliced mushrooms", "Sliced red pepper", "Sliced black olives" }) {}
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZAS_H
