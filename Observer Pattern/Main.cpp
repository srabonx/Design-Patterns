

#include "CurrentConditionsDisplay.h"
#include "ForecastDisplay.h"
#include "WeatherData.h"
#include "WeatherStatsDisplay.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	{
		WeatherData* weatherData = new WeatherData();

		CurrentConditionsDisplay* currCondDisp = new CurrentConditionsDisplay(weatherData);
		WeatherStatsDisplay	statsDisp(weatherData);
		ForecastDisplay forecastDisp(weatherData);

		weatherData->SetMeasurement(80, 65, 30.4f);
		weatherData->SetMeasurement(82, 70, 29.2f);
		weatherData->SetMeasurement(78, 90, 29.2f);

		delete weatherData;
		delete currCondDisp;

	}

#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif
}
