#ifndef CLoad_H
#define CLoad_H

#include "../CommandBase.h"
#include "WPILib.h"

class CLoad: public CommandBase
{
public:
	CLoad();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
