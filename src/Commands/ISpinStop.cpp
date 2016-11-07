#include "ISpinStop.h"

ISpinStop::ISpinStop()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(Robot::intake.get());
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ISpinStop::Initialize()
{
	Robot::intake->SpinStop();
}

// Called repeatedly when this Command is scheduled to run
void ISpinStop::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ISpinStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ISpinStop::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ISpinStop::Interrupted()
{

}
