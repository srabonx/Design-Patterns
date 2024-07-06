#include <iostream>

#include "Bird.h"


class ICanFly : public FlyBehaviour
{
public:
	void Fly() override
	{
		std::cout << "I can fly" << std::endl;
	}
};

class ICanSwim : public SwimBehaviour
{
public:
	void Swim() override
	{
		std::cout << "I can swim" << std::endl;
	}
};

class ICanMigrate : public MigrationBehaviour
{
public:
	void Migrate() override
	{
		std::cout << "I can migrate" << std::endl;
	}
};

class ICannotFly : public FlyBehaviour
{
public:
	void Fly() override
	{
		std::cout << "I cannot fly" << std::endl;
	}
};

class Flamingo : public Bird
{
public:
	Flamingo()
	{
		// Create instance of the desired behaviour
		m_flyBehaviour = new ICanFly();
		m_swimBehaviour = new ICanSwim();
		m_migrationBehaviour = new ICanMigrate();
	}

	~Flamingo(){}

};

int main()
{

#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif


	Bird* flamingo = new Flamingo();

	flamingo->Eat();
	flamingo->Swim();
	flamingo->Fly();
	flamingo->Migrate();

	/*any new class can derive from any behaviour class and provide their implementation and change
	* the behaviour of any class that derives from Bird dynamically
	*/

	flamingo->AddFlyBehaviour(new ICannotFly());

	// new provided behaviour class's method will be called
	flamingo->Fly();

	delete flamingo;

#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif
}