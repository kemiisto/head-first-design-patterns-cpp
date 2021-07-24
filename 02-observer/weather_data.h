#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_WEATHER_DATA_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_WEATHER_DATA_H

#include <vector>

#include "subject.h"

class WeatherData final : public Subject {
public:
    void registerObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;

    void measurementsChanged();
    void setMeasurements(float newTemperature, float newHumidity, float newPressure);

private:
    std::vector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_WEATHER_DATA_H
