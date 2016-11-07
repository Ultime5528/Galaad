#include "ISpinOut.h"

ISpinOut::ISpinOut()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::intake.get());
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ISpinOut::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void ISpinOut::Execute()
{
	Robot::intake->SpinOut();
}

// Make this return true when this Command no longer needs to run execute()
bool ISpinOut::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ISpinOut::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ISpinOut::Interrupted()
{

}
