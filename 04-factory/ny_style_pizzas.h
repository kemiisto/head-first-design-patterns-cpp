#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_NY_STYLE_PIZZAS_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_NY_STYLE_PIZZAS_H

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() : Pizza(
        "NY Style Sauce and Cheese Pizza",
        "Thin Crust Dough",
        "Marinara Sauce",
        { "Grated Reggiano Cheese" }) {}
};

class NYStyleClamPizza : public Pizza {
public:
    NYStyleClamPizza() : Pizza(
        "NY Style Clam Pizza",
        "Thin Crust Dough",
        "Marinara Sauce",
        { "Grated Reggiano Cheese", "Fresh Clams from Long Island Sound" }) {}
};

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() : Pizza(
        "NY Style Pepperoni Pizza",
        "Thin Crust Dough",
        "Marinara Sauce",
        {
            "Grated Reggiano Cheese",
            "Sliced Pepperoni",
            "Garlic",
            "Onion",
            "Mushrooms",
            "Red Pepper"
        }) {}
};

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza() : Pizza(
        "NY Style Veggie Pizza",
        "Thin Crust Dough",
        "Marinara Sauce",
        {
            "Grated Reggiano Cheese",
            "Garlic",
            "Onion",
            "Mushrooms",
            "Red Pepper"
        }) {}
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_NY_STYLE_PIZZAS_H
