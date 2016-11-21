#ifndef CSPIN_H
#define CSPIN_H

#include "../CommandBase.h"
#include "WPILib.h"
#include "../Robot.h"
class CSpin: public CommandBase
{
public:
	CSpin();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
