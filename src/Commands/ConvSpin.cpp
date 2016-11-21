#include "ConvSpin.h"


ConvSpin::ConvSpin()
{
	Requires(Robot::shooter.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void ConvSpin::Initialize()
{
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void ConvSpin::Execute()
{
	Robot::shooter->ConvOut();
}

// Make this return true when this Command no longer needs to run execute()
bool ConvSpin::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void ConvSpin::End()
{
	Robot::shooter->StopConv();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ConvSpin::Interrupted()
{
	End();
}
