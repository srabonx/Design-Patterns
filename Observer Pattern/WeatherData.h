#pragma once
#include <list>
#include <memory>

#include "Subject.h"


class WeatherData : public Subject
{
public:
	WeatherData();
	~WeatherData();
	void MeasurementChanged();
	void SetMeasurement(float temp, float humidity, float pressure);

	void RegisterObserver(Observer* o) override;
	void RemoveObserver(Observer* o) override;
	void NotifyObserver() override;

private:
	std::list<Observer*> m_observers;

	float m_temperature { 0.f };
	float m_humidity { 0.f };
	float m_pressure{ 0.f };
};
