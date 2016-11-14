#include "ISpinDown.h"

ISpinDown::ISpinDown()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ISpinDown::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ISpinDown::Execute()
{
	Robot::intake->SpinDown();
}

// Make this return true when this Command no longer needs to run execute()
bool ISpinDown::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ISpinDown::End()
{
	Robot::intake->SpinLvStop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ISpinDown::Interrupted()
{
	End();
}
