#include "EStop.h"

EStop::EStop()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void EStop::Initialize()
{
	Robot::elevateur->Stop();
}

// Called repeatedly when this Command is scheduled to run
void EStop::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool EStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void EStop::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void EStop::Interrupted()
{
	End();
}
