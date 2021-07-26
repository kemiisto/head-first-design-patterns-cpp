#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_FORECAST_DISPLAY_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_FORECAST_DISPLAY_H

#include "observer.h"
#include "display_element.h"

class ForecastDisplay final : public Observer, public DisplayElement {
public:
    explicit ForecastDisplay(WeatherData& weatherData) :
        Observer(weatherData), DisplayElement() {}

    void update(float newTemperature, float newHumidity, float newPressure) override {
        lastPressure = currentPressure;
        currentPressure = newPressure;
        display();
    }

    void display() override {
        std::cout << "Forecast: ";
        if (currentPressure > lastPressure) {
            std::cout << "Improving weather on the way!";
        } else if (currentPressure == lastPressure) {
            std::cout << "More of the same";
        } else if (currentPressure < lastPressure) {
            std::cout << "Watch out for cooler, rainy weather";
        }
        std::cout << std::endl;
    }
private:
    float currentPressure = 29.92f;
    float lastPressure = 0.0f;
};

#endif //HEAD_FIRST_DESIGN_PATTERNS_CPP_FORECAST_DISPLAY_H
