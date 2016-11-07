#ifndef ISPINOUT_H
#define ISPINOUT_H


#include "WPILib.h"
#include "../Robot.h"

class ISpinOut: public Command
{
public:
	ISpinOut();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
