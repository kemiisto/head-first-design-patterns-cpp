#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORES_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORES_H

#include <memory>

#include "chicago_style_pizzas.h"
#include "ny_style_pizzas.h"

class PizzaStore {
public:
    virtual ~PizzaStore() = default;

    virtual std::unique_ptr<Pizza> createPizza(const std::string& type) = 0;

    std::unique_ptr<Pizza> orderPizza(const std::string& type) {
        std::unique_ptr<Pizza> pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};

class ChicagoPizzaStore : public PizzaStore {
    std::unique_ptr<Pizza> createPizza(const std::string& type) override {
        if (type == "cheese") {
            return std::make_unique<ChicagoStyleCheesePizza>();
        } else if (type == "veggie") {
            return std::make_unique<ChicagoStyleVeggiePizza>();
        } else if (type == "clam") {
            return std::make_unique<ChicagoStyleClamPizza>();
        } else if (type == "pepperoni") {
            return std::make_unique<ChicagoStylePepperoniPizza>();
        } else {
            return nullptr;
        }
    }
};

class NYPizzaStore : public PizzaStore {
    std::unique_ptr<Pizza> createPizza(const std::string& type) override {
        if (type == "cheese") {
            return std::make_unique<NYStyleCheesePizza>();
        } else if (type == "veggie") {
            return std::make_unique<NYStyleVeggiePizza>();
        } else if (type == "clam") {
            return std::make_unique<NYStyleClamPizza>();
        } else if (type == "pepperoni") {
            return std::make_unique<NYStylePepperoniPizza>();
        } else {
            return nullptr;
        }
    }
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_PIZZA_STORES_H
