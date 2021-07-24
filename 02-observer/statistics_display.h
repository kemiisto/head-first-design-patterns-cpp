#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_STATISTICS_DISPLAY_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_STATISTICS_DISPLAY_H

#include "observer.h"
#include "display_element.h"

class StatisticsDisplay final : public Observer, public DisplayElement {
public:
    explicit StatisticsDisplay(WeatherData* weatherData) :
        Observer(weatherData), DisplayElement() {}

    void update(float newTemperature, float newHumidity, float newPressure) override {
        tempSum += newTemperature;
        numReadings++;

        if (newTemperature > maxTemp) {
            maxTemp = newTemperature;
        }

        if (newTemperature < minTemp) {
            minTemp = newTemperature;
        }

        display();
    }

    void display() override {
        std::cout << "Avg/Max/Min temperature = " <<
            (tempSum / numReadings) << "/" << maxTemp << "/" << minTemp << std::endl;
    }
private:
    float maxTemp = 0.0f;
    float minTemp = 200;
    float tempSum= 0.0f;
    int numReadings = 0;
};


#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_STATISTICS_DISPLAY_H
