#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_SIMPLE_PIZZA_FACTORY_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_SIMPLE_PIZZA_FACTORY_H

#include <memory>

#include "pizzas.h"

class SimplePizzaFactory {
public:
    std::unique_ptr<Pizza> createPizza(const std::string& type) {
        std::unique_ptr<Pizza> pizza = nullptr;
        if (type == "cheese") {
            pizza = std::make_unique<CheesePizza>();
        } else if (type == "pepperoni") {
            pizza = std::make_unique<PepperoniPizza>();
        } else if (type == "clam") {
            pizza = std::make_unique<ClamPizza>();
        } else if (type == "veggie") {
            pizza = std::make_unique<VeggiePizza>();
        }
        return pizza;
    }
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_SIMPLE_PIZZA_FACTORY_H
