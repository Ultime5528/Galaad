#ifndef ISPINSETDOWN_H
#define ISPINSETDOWN_H

#include "Robot.h"
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
