#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_CURRENT_CONDITIONS_DISPLAY_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_CURRENT_CONDITIONS_DISPLAY_H

#include "observer.h"
#include "display_element.h"

class CurrentConditionsDisplay final : public Observer, public DisplayElement {
public:
    explicit CurrentConditionsDisplay(WeatherData& weatherData) :
        Observer(weatherData), DisplayElement() {}

    void update(float newTemperature, float newHumidity, float newPressure) override {
        temperature = newTemperature;
        humidity = newHumidity;
        display();
    }

    void display() override {
        std::cout << "Current conditions: " << temperature
            << "F degrees and " << humidity << "% humidity" << std::endl;
    }
private:
    float temperature = 0.0f;
    float humidity = 0.0f;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_CURRENT_CONDITIONS_DISPLAY_H
