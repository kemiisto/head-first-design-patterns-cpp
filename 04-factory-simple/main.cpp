#include "pizza_store.h"
#include "simple_pizza_factory.h"

int main() {
    PizzaStore store(std::make_unique<SimplePizzaFactory>());

    std::unique_ptr<Pizza> pizza = store.orderPizza("cheese");
    std::cout << "We ordered a " << pizza->getName() << '\n';
    std::cout << *pizza << '\n';

    pizza = store.orderPizza("veggie");
    std::cout << "We ordered a " << pizza->getName() << '\n';
    std::cout << *pizza << '\n';

    return EXIT_SUCCESS;
}
