#pragma once
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(Subject* subject);
	~CurrentConditionsDisplay();
	void Update(float temp, float humidity, float pressure) override;
	void Display() override;

private:
	float m_temperature{ 0.f };
	float m_humidity{ 0.f };
	float m_pressure{ 0.f };

	Subject* m_subject;
};
