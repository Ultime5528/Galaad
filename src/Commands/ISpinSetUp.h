#ifndef ISPINSETUP_H
#define ISPINSETUP_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ISpinSetUp: public Command
{
public:
	ISpinSetUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
