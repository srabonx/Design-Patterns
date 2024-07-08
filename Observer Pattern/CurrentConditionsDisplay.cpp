#include "CurrentConditionsDisplay.h"

#include <iostream>
#include <string>

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* subject)
{
	m_subject = subject;
	m_subject->RegisterObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay()
{
}

void CurrentConditionsDisplay::Update(float temp, float humidity, float pressure)
{
	this->m_temperature = temp;
	this->m_humidity = humidity;
	this->m_pressure = pressure;
	Display();
}

void CurrentConditionsDisplay::Display()
{
	std::cout << "Current Conditions: " + std::to_string(m_temperature) + "F degrees and " + std::to_string(m_humidity) +
		"% humidity" << std::endl;
}
