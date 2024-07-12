
#include <iostream>

#include "Duck.h"
#include "MallardDuck.h"
#include "Turkey.h"
#include "TurkeyAdapter.h"
#include "WildTurkey.h"


void PerformDucking(Duck* duck)
{
	duck->Quack();
	duck->Fly();
}

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	Turkey* turkey = new WildTurkey();

	Duck* duck = new MallardDuck();

	TurkeyAdapter* turkeyAdapter = new TurkeyAdapter(turkey);

	PerformDucking(duck);
	PerformDucking(turkeyAdapter);

	delete turkey;
	delete duck;
	delete turkeyAdapter;

#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif
}

