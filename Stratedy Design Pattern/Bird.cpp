#include "Bird.h"

#include <iostream>

Bird::Bird()
{
}

Bird::~Bird()
{
		delete m_flyBehaviour;
		delete m_swimBehaviour;
		delete m_migrationBehaviour;
}

void Bird::Eat()
{
	std::cout << "I can eat" << std::endl;
}

void Bird::Fly()
{
	if (m_flyBehaviour)
		m_flyBehaviour->Fly();
}

void Bird::Swim()
{
	if (m_swimBehaviour)
		m_swimBehaviour->Swim();
}

void Bird::Migrate()
{
	if (m_migrationBehaviour)
		m_migrationBehaviour->Migrate();
}

void Bird::AddFlyBehaviour(FlyBehaviour* p_flyBehaviour)
{
	// delete previous behaviour, if any
	delete m_flyBehaviour;

	m_flyBehaviour = p_flyBehaviour;
}

void Bird::AddSwimBehaviour(SwimBehaviour* p_swimBehaviour)
{
	// delete previous behaviour, if any
	delete m_swimBehaviour;
	m_swimBehaviour = p_swimBehaviour;
}

void Bird::AddMigrationBehaviour(MigrationBehaviour* p_migrationBehaviour)
{
	// delete previous behaviour, if any
	delete m_migrationBehaviour;
	m_migrationBehaviour = p_migrationBehaviour;
}
