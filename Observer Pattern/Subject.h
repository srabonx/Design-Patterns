#pragma once
#include <list>

class Observer;

// The Subject class will be implemented by the class that wants to send notification
class Subject
{
public:
	virtual void RegisterObserver(Observer* o) = 0;
	virtual void RemoveObserver(Observer* o) = 0;
	virtual void NotifyObserver() = 0;
};