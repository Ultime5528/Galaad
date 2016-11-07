#ifndef CSpin_H
#define CSpin_H

#include "../CommandBase.h"
#include "WPILib.h"

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
