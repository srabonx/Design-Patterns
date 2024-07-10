
#define _CRTDBG_MAP_ALLOC

#include <iostream>

#include "ChicagoPizzaStore.h"
#include "NYPizzaStore.h"
#include "PizzaStore.h"


int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	{
		PizzaStore* nyStore = new NYPizzaStore();
		PizzaStore* chStore = new ChicagoPizzaStore;

		std::unique_ptr<Pizza> pizza;
		pizza.reset(nyStore->OrderPizza("cheese"));

		Pizza* chPizza = chStore->OrderPizza("clam");

		delete chPizza;
		delete chStore;
		//delete pizza;
		delete nyStore;
	}
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);
	
#endif

}
