#include "CurrentConditionsDisplay.h"

#include <iostream>
#include <string>

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData* subject)
{
	m_subject = subject;
	m_subject->RegisterObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}

void CurrentConditionsDisplay::Update()
{
	this->m_temperature = m_subject->GetTemperature();
	this->m_humidity = m_subject->GetHumidity();
	Display();
}

void CurrentConditionsDisplay::Display()
{
	std::cout << "Current Conditions: " + std::to_string(m_temperature) + "F degrees and " + std::to_string(m_humidity) +
		"% humidity" << std::endl;
}
