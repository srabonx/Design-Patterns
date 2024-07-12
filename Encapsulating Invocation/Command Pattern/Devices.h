#pragma once
#include <iostream>

class CeilingLight
{
public:

	CeilingLight(const std::string& name) : m_name(name)
	{

	}

	virtual ~CeilingLight() = default;

	void On()
	{
		std::cout << "Ceiling light on" << std::endl;
	}

	void Off()
	{
		std::cout << "Ceiling light off" << std::endl;
	}

	void Dim()
	{

	}

private:
	std::string m_name;

};

class TV
{
public:

	TV(const std::string& name) : m_name(name)
	{
		
	}
	virtual ~TV() = default;


	void On()
	{
		std::cout << "Tv on" << std::endl;
	}

	void Off()
	{
		std::cout << "Tv off" << std::endl;
	}

	void setInputChannel()
	{
		std::cout << "Channel switched to 24" << std::endl;
	}

	void setVolume()
	{
		std::cout << "Volume set to 11" << std::endl;
	}

private:
	std::string m_name;
};
