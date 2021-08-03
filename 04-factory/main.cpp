#include "pizza_stores.h"

int main() {
    NYPizzaStore nyStore;
    ChicagoPizzaStore chicagoStore;

    std::unique_ptr<Pizza> pizza = nyStore.orderPizza("cheese");
    std::cout << "Ethan ordered a " + pizza->getName() << '\n';

    pizza = chicagoStore.orderPizza("cheese");
    std::cout << "Joel ordered a " + pizza->getName() << '\n';

    pizza = nyStore.orderPizza("clam");
    std::cout << "Ethan ordered a " + pizza->getName() << '\n';

    pizza = chicagoStore.orderPizza("clam");
    std::cout << "Joel ordered a " + pizza->getName() << '\n';

    pizza = nyStore.orderPizza("pepperoni");
    std::cout << "Ethan ordered a " + pizza->getName() << '\n';

    pizza = chicagoStore.orderPizza("pepperoni");
    std::cout << "Joel ordered a " + pizza->getName() << '\n';

    pizza = nyStore.orderPizza("veggie");
    std::cout << "Ethan ordered a " + pizza->getName() << '\n';

    pizza = chicagoStore.orderPizza("veggie");
    std::cout << "Joel ordered a " + pizza->getName() << '\n';

    return EXIT_SUCCESS;
}
