#pragma once


// Observer will get the Update method called from the class that implemented Subject class
class Observer
{
public:
	virtual void Update() = 0;
};