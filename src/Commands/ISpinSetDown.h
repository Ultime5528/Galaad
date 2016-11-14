#ifndef ISpinSetDown_H
#define ISpinSetDown_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ISpinSetDown: public Command
{
public:
	ISpinSetDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
