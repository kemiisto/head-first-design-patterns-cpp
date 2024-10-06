#include <iostream>
#include <memory>

#include "beverages.h"
#include "condiment_decorators.h"

int main() {
    std::unique_ptr<Beverage> beverage = std::make_unique<Espresso>();
    std::cout << beverage->getDescription() << " $ " << beverage->getCost() << '\n';

    std::unique_ptr<Beverage> beverage2 = std::make_unique<DarkRoast>();
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Mocha>(std::move(beverage2));
    beverage2 = std::make_unique<Whip>(std::move(beverage2));
    std::cout << beverage2->getDescription() << " $ " << beverage2->getCost() << '\n';

    std::unique_ptr<Beverage> beverage3 = std::make_unique<HouseBlend>();
    beverage3 = std::make_unique<Soy>(std::move(beverage3));
    beverage3 = std::make_unique<Mocha>(std::move(beverage3));
    beverage3 = std::make_unique<Whip>(std::move(beverage3));
    std::cout << beverage3->getDescription() << " $ " << beverage3->getCost() << '\n';

    return EXIT_SUCCESS;
}
