#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORE_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORE_H

#include "simple_pizza_factory.h"

class PizzaStore {
public:
    PizzaStore(std::unique_ptr<SimplePizzaFactory> factory) : factory(std::move(factory)) {}
    std::unique_ptr<Pizza> orderPizza(const std::string& type) {
        std::unique_ptr<Pizza> pizza = factory->createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
private:
    std::unique_ptr<SimplePizzaFactory> factory;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORE_H
