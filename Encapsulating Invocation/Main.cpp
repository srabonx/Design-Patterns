

#include <crtdbg.h>

#include "Device.h"
#include "Remote.h"
#include "VendorDevices.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	Device* ceilingLight = new CeilingLight();
	Device* tv = new TV();

	std::vector<Device*> devices;

	for(int i = 0;i <5;i++)
	{
		Device* light = new CeilingLight();
		devices.push_back(light);
	}

	Remote* remote = new Remote();

	remote->AssignDevice(0, ceilingLight);
	remote->AssignDevice(1, tv);
	remote->AssignDevice(2, devices);

	remote->PressOn(0);
	remote->PressOn(1);
	remote->RemoveDevice(1);
	remote->PressOff(1);
	remote->PressOff(0);
	remote->PressOn(2);

	for (auto& d : devices)
		delete d;

	delete ceilingLight;
	delete tv;
	delete remote;

#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);

#endif
}
