#include "ForecastDisplay.h"

#include <iostream>
#include <string>

ForecastDisplay::ForecastDisplay(WeatherData* subject)
{
	m_subject = subject;
	m_subject->RegisterObserver(this);
}

ForecastDisplay::~ForecastDisplay()
{
}

void ForecastDisplay::Display()
{
	std::cout << "Showing Weather forecast: " << std::to_string(m_pressure) << std::endl;
}

void ForecastDisplay::Update()
{
	m_pressure = m_subject->GetPressure();

	Display();
}
