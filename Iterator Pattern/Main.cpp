


#include <crtdbg.h>

#include "DinerMenu.h"
#include "Waitress.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	
	DinerMenu* menu = new DinerMenu();
	PancakeHouseMenu* pancakeMenu = new PancakeHouseMenu();

	Waitress waitress(menu, pancakeMenu);

	waitress.PrintMenu();

	delete pancakeMenu;
	delete menu;
#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif

}
