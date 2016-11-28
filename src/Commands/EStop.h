#ifndef ESTOP_H
#define ESTOP_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class EStop: public Command
{
public:
	EStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
