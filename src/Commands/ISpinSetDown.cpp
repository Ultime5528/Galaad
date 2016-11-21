#include "ISpinSetDown.h"

ISpinSetDown::ISpinSetDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ISpinSetDown::Initialize()
{
	SetTimeout(1.5);
}

// Called repeatedly when this Command is scheduled to run
void ISpinSetDown::Execute()
{
	Robot::intake->SpinDown();
}

// Make this return true when this Command no longer needs to run execute()
bool ISpinSetDown::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void ISpinSetDown::End()
{
	Robot::intake->SpinLvStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ISpinSetDown::Interrupted()
{
	End();
}
