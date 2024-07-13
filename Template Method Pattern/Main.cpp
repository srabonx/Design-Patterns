

#include "CaffeineBeverage.h"
#include "Coffee.h"
#include "Tea.h"

int main()
{
	CaffeineBeverage* coffee = new Coffee();

	coffee->Prepare();

	CaffeineBeverage* tea = new Tea();

	tea->Prepare();

	delete coffee;
	delete tea;

}
