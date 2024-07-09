#pragma once
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"
#include "WeatherData.h"

class WeatherStatsDisplay : public Observer, public DisplayElement
{
public:
	WeatherStatsDisplay(WeatherData* subject);
	~WeatherStatsDisplay();
	void Display() override;
	void Update() override;

private:
	float m_temperature{ 0.f };

	float m_maxTemp{ 0.0f };
	float m_minTemp{ 200.0f };
	float m_totalTemp{ 0.0f };
	float m_avgTemp{ 0.0f };
	int m_sampleTaken{ 0 };


	WeatherData* m_subject{ nullptr };
};
