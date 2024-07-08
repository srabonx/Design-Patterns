

#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"
#include "WeatherStatsDisplay.h"

int main()
{
	WeatherData weatherData;

	CurrentConditionsDisplay currCondDisp(&weatherData);
	WeatherStatsDisplay	statsDisp(&weatherData);

	weatherData.SetMeasurement(80, 65, 30.4f);
	weatherData.SetMeasurement(82, 70, 29.2f);
	weatherData.SetMeasurement(78, 90, 29.2f);
}
