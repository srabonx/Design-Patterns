

#include <crtdbg.h>

#include "Remote.h"

int main()
{
#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif


	NoCommand nocmd;

	// Initialize with no commands
	Remote* remote = new Remote(nocmd);

	CeilingLight* light = new CeilingLight("Living room light");
	Command* lightOnCommand = new LightOnCommand(*light);
	Command* lightOffCommand = new LightOffCommand(*light);

	TV tv("LivingRoomTv");
	TVOnCommand tvOnCommand(tv);
	TVOffCommand tvOffCommand(tv);

	remote->AssignDevice(0, *lightOnCommand, *lightOffCommand);
	remote->AssignDevice(1, tvOnCommand, tvOffCommand);

	remote->ButtonOffPressed(0);
	remote->ButtonUndoPressed();

	remote->ButtonOnPressed(1);
	remote->ButtonOffPressed(1);

	delete light;
	delete lightOnCommand;
	delete lightOffCommand;
	delete remote;

#if defined(DEBUG) || defined(_DEBUG)
	_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG);

#endif
}
