#ifndef ISPINSTOP_H
#define ISPINSTOP_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class ISpinStop: public Command
{
public:
	ISpinStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
