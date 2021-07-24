#include "weather_data.h"

#include "observer.h"

void WeatherData::registerObserver(Observer* observer) {
    observers.push_back(observer);
}

void WeatherData::removeObserver(Observer* observer) {
    // erase-remove idiom
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void WeatherData::notifyObservers() {
    for (const auto observer : observers) {
        observer->update(temperature, humidity, pressure);
    }
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float newTemperature, float newHumidity, float newPressure) {
    temperature = newTemperature;
    humidity = newHumidity;
    pressure = newPressure;
    measurementsChanged();
}
