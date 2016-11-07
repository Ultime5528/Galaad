#ifndef ConvSpin_H
#define ConvSpin_H

#include "../CommandBase.h"
#include "WPILib.h"

class ConvSpin: public CommandBase
{
public:
	ConvSpin();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
