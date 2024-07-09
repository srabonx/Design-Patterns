#include "WeatherStatsDisplay.h"

#include <iostream>
#include <ostream>
#include <string>

WeatherStatsDisplay::WeatherStatsDisplay(WeatherData* subject)
{
	m_subject = subject;
	m_subject->RegisterObserver(this);
}

WeatherStatsDisplay::~WeatherStatsDisplay()
{

}

void WeatherStatsDisplay::Display()
{
	std::cout << "Avg/Max/Min temperature : " + std::to_string(m_avgTemp) + "/ " + std::to_string(m_maxTemp) +
		"/ " + std::to_string(m_minTemp) << std::endl;
}

void WeatherStatsDisplay::Update()
{
	this->m_temperature = m_subject->GetTemperature();
	this->m_totalTemp += m_temperature;
	this->m_sampleTaken++;

	if (m_temperature >= m_maxTemp)
		m_maxTemp = m_temperature;
	if (m_temperature <= m_minTemp)
		m_minTemp = m_temperature;

	this->m_avgTemp = m_totalTemp / static_cast<float>(m_sampleTaken);

	Display();
}
