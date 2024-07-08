#pragma once
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class WeatherStatsDisplay : public Observer, public DisplayElement
{
public:
	WeatherStatsDisplay(Subject* subject);
	~WeatherStatsDisplay();
	void Display() override;
	void Update(float temp, float humidity, float pressure) override;

private:
	float m_temperature{ 0.f };

	float m_maxTemp{ 0.0f };
	float m_minTemp{ 200.0f };
	float m_totalTemp{ 0.0f };
	float m_avgTemp{ 0.0f };
	int m_sampleTaken{ 0 };


	Subject* m_subject;
};
