#ifndef Viser_H
#define Viser_H

#include "../CommandBase.h"
#include "WPILib.h"

class Viser: public CommandBase
{
public:
	Viser();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
