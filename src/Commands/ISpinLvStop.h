#ifndef ISPINLVSTOP_H
#define ISPINLVSTOP_H

#include "Robot.h"
#include "WPILib.h"

class ISpinLvStop: public Command
{
public:
	ISpinLvStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
