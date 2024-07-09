#include "WeatherData.h"

#include "Observer.h"

WeatherData::WeatherData()
{

}

WeatherData::~WeatherData()
{
}

void WeatherData::MeasurementChanged()
{
	NotifyObserver();
}

void WeatherData::SetMeasurement(float temp, float humidity, float pressure)
{
	this->m_temperature = temp;
	this->m_humidity = humidity;
	this->m_pressure = pressure;
	MeasurementChanged();
}

void WeatherData::RegisterObserver(Observer* o)
{
	m_observers.push_back(o);
}

void WeatherData::RemoveObserver(Observer* o)
{
	m_observers.remove(o);
}

void WeatherData::NotifyObserver()
{
	for (const auto& observer : m_observers)
		observer->Update();
}
