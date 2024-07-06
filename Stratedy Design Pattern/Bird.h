#pragma once
#include "BirdBehaviour.h"

class Bird
{
public:
	Bird();
	~Bird();

	void Eat();

	void Fly();
	void Swim();
	void Migrate();

	void AddFlyBehaviour(FlyBehaviour* p_flyBehaviour);
	void AddSwimBehaviour(SwimBehaviour* p_swimBehaviour);
	void AddMigrationBehaviour(MigrationBehaviour* p_migrationBehaviour);

protected:

	FlyBehaviour* m_flyBehaviour{ nullptr };
	SwimBehaviour* m_swimBehaviour{ nullptr };
	MigrationBehaviour* m_migrationBehaviour{ nullptr };

};
