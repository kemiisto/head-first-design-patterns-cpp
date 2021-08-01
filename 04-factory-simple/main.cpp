#include "pizza_store.h"
#include "simple_pizza_factory.h"

int main() {
    PizzaStore store(std::make_unique<SimplePizzaFactory>());

    std::unique_ptr<Pizza> pizza = store.orderPizza("cheese");
    std::cout << "We ordered a " << pizza->getName() << std::endl;
    std::cout << *pizza << std::endl;

    pizza = store.orderPizza("veggie");
    std::cout << "We ordered a " << pizza->getName() << std::endl;
    std::cout << *pizza << std::endl;

    return EXIT_SUCCESS;
}
