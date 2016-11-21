#ifndef ConvSPIN_H
#define ConvSPIN_H

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
