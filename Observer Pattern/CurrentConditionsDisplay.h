#pragma once
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include "WeatherData.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(WeatherData* subject);
	~CurrentConditionsDisplay();
	void Update() override;
	void Display() override;

private:
	float m_temperature{ 0.f };
	float m_humidity{ 0.f };

	WeatherData* m_subject{ nullptr };
};
