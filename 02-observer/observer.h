#ifndef HEAD_FIRST_DESIGN_PATTERNS_CPP_OBSERVER_H
#define HEAD_FIRST_DESIGN_PATTERNS_CPP_OBSERVER_H

#include "weather_data.h"

class Observer {
public:
    explicit Observer(WeatherData& weatherData) : weatherData(weatherData) {
        weatherData.registerObserver(this);
    }
    virtual ~Observer() = default;
    virtual void update(float newTemperature, float newHumidity, float newPressure) = 0;
private:
    WeatherData& weatherData;
};

#endif // HEAD_FIRST_DESIGN_PATTERNS_CPP_OBSERVER_H
