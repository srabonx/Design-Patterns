#pragma once
#include <list>
#include <memory>

#include "Subject.h"


class WeatherData : public Subject
{
public:
	WeatherData();
	virtual ~WeatherData();
	void MeasurementChanged();
	void SetMeasurement(float temp, float humidity, float pressure);

	void RegisterObserver(Observer* o) override;
	void RemoveObserver(Observer* o) override;
	void NotifyObserver() override;

	[[nodiscard]] float GetTemperature() const { return m_temperature; }
	[[nodiscard]] float GetHumidity() const { return m_humidity; }
	[[nodiscard]] float GetPressure() const { return m_pressure; }

private:

	float m_temperature { 0.f };
	float m_humidity { 0.f };
	float m_pressure{ 0.f };

	std::list<Observer*> m_observers;
};
