#include <iostream>

#include "weather_data.h"
#include "current_conditions_display.h"
#include "statistics_display.h"
#include "forecast_display.h"

int main() {
    WeatherData weatherData;

    CurrentConditionsDisplay currentConditionsDisplay(&weatherData);
    StatisticsDisplay statisticsDisplay(&weatherData);
    ForecastDisplay forecastDisplay(&weatherData);

    weatherData.setMeasurements(80, 65, 30.4f);
    weatherData.setMeasurements(82, 70, 29.2f);
    weatherData.setMeasurements(78, 90, 29.2f);

    weatherData.removeObserver(&forecastDisplay);
    weatherData.setMeasurements(62, 90, 28.1f);

    return EXIT_SUCCESS;
}
