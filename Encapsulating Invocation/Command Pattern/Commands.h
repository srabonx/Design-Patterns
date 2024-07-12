#pragma once
#include "Command.h"
#include "Devices.h"

class NoCommand : public Command
{
public:
	void Execute() override {}
	void Undo() override {}
};

class LightOnCommand : public Command
{
public:
	LightOnCommand(CeilingLight& light) : m_light(light)
	{
		
	}
	void Execute() override
	{
		m_light.On();
	}
	void Undo() override
	{
		m_light.Off();
	}

private:
	CeilingLight& m_light;
};

class LightOffCommand : public Command
{
public:
	LightOffCommand(CeilingLight& light) : m_light(light)
	{

	}
	void Execute() override
	{
		m_light.Off();
	}
	void Undo() override
	{
		m_light.On();
	}

private:
	CeilingLight& m_light;
};

class TVOnCommand : public Command
{
public:
	TVOnCommand(TV& tv) : m_tv(tv)
	{

	}
	void Execute() override
	{
		m_tv.On();
		m_tv.setInputChannel();
		m_tv.setVolume();
	}
	void Undo() override
	{
		m_tv.Off();
	}

private:
	TV& m_tv;
};

class TVOffCommand : public Command
{
public:
	TVOffCommand(TV& tv) : m_tv(tv)
	{

	}
	void Execute() override
	{
		m_tv.Off();
	}
	void Undo() override
	{
		m_tv.On();
	}

private:
	TV& m_tv;
};