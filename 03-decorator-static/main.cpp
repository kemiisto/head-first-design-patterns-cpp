#include <iostream>
#include <memory>

#include "beverages.h"
#include "condiment_decorators.h"

int main() {
    auto beverage = std::make_unique<Espresso>();
    std::cout << beverage->getDescription() << " $ " << beverage->getCost() << '\n';

    auto beverage2 = std::make_unique<Whip<Mocha<Mocha<DarkRoast>>>>();
    std::cout << beverage2->getDescription() << " $ " << beverage2->getCost() << '\n';

    auto beverage3 = std::make_unique<Whip<Mocha<Soy<HouseBlend>>>>();
    std::cout << beverage3->getDescription() << " $ " << beverage3->getCost() << '\n';

    return EXIT_SUCCESS;
}
