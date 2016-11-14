#ifndef ISPINDOWN_H
#define ISPINDOWN_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ISpinDown: public Command
{
public:
	ISpinDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
