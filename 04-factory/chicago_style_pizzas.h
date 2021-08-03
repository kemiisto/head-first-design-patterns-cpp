#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_CHICAGO_STYLE_PIZZAS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_CHICAGO_STYLE_PIZZAS_H

#include "pizzas.h"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() : Pizza(
        "Chicago Style Deep Dish Cheese Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        { "Shredded Mozzarella Cheese" }) {}

    void cut() override {
        std::cout << "Cutting the pizza into square slices\n";
    }
};

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza() : Pizza(
        "Chicago Style Clam Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        { "Shredded Mozzarella Cheese", "Frozen Clams from Chesapeake Bay" }) {}
    void cut() override {
        std::cout << "Cutting the pizza into square slices\n";
    }
};

class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza() : Pizza(
        "Chicago Style Pepperoni Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {
            "Shredded Mozzarella Cheese",
            "Black Olives",
            "Spinach",
            "Eggplant",
            "Sliced Pepperoni"
        }) {}
    void cut() override {
        std::cout << "Cutting the pizza into square slices\n";
    }
};

class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza() : Pizza(
        "Chicago Deep Dish Veggie Pizza",
        "Extra Thick Crust Dough",
        "Plum Tomato Sauce",
        {
            "Shredded Mozzarella Cheese",
            "Black Olives",
            "Spinach",
            "Eggplant"
        }) {}
    void cut() override {
        std::cout << "Cutting the pizza into square slices\n";
    }
};

#endif //HEAD_FIRST_DESIGN_PATTERNS_CPP_CHICAGO_STYLE_PIZZAS_H
