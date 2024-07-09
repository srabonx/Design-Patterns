
#include <iostream>

#include "Beverage.h"
#include "Coffees.h"
#include "Condiments.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif
	{
		std::shared_ptr<Beverage> beverage = std::make_shared<Espresso>();

		std::cout << beverage->GetDescription() << std::endl;

		std::shared_ptr<Beverage> beverage2(new DarkRoast());
		beverage2 = std::make_shared<Mocha>(beverage2);
		beverage2 = std::make_shared<Mocha>(beverage2);
		beverage2 = std::make_shared<Whip>(beverage2);

		std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;

		std::shared_ptr<Beverage> beverage3 = std::make_shared<HouseBlend>();
		beverage3->SetSize(Beverage::Size::GRANDE);
		beverage3 = std::make_shared<Soy>(beverage3);
		beverage3 = std::make_shared<Mocha>(beverage3);
		beverage3 = std::make_shared<Mocha>(beverage3);
		beverage3 = std::make_shared<Whip>(beverage3);

		std::cout << beverage3->GetDescription() << " $" << beverage3->Cost() << std::endl;

	}

#if defined(DEBUG) || defined(_DEBUG)
	_CrtDumpMemoryLeaks();
#endif
}

