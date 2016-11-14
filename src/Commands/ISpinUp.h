#ifndef ISPINUP_H
#define ISPINUP_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ISpinUp: public Command
{
public:
	ISpinUp();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
