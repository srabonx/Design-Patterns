

#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	CaffeineBeverage* coffee = new Coffee();

	coffee->Prepare();

	CaffeineBeverage* tea = new Tea();

	tea->Prepare();

	delete coffee;
	delete tea;

#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif

}
