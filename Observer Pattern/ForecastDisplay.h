#pragma once
#include "DisplayElement.h"
#include "Observer.h"
#include "WeatherData.h"

class ForecastDisplay : public Observer, public DisplayElement
{
public:
	ForecastDisplay(WeatherData* subject);
	~ForecastDisplay();
	void Display() override;
	void Update() override;

private:

	WeatherData* m_subject{ nullptr };

	float m_pressure{ 0.0f };
};
