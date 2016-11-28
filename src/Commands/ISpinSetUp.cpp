#include "ISpinSetUp.h"

ISpinSetUp::ISpinSetUp()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ISpinSetUp::Initialize()
{
	SetTimeout(2);
}

// Called repeatedly when this Command is scheduled to run
void ISpinSetUp::Execute()
{
	Robot::intake->SpinUp();
}

// Make this return true when this Command no longer needs to run execute()
bool ISpinSetUp::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void ISpinSetUp::End()
{
	Robot::intake->SpinLvStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ISpinSetUp::Interrupted()
{
	End();
}
