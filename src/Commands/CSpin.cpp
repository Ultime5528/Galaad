#include "CSpin.h"

CSpin::CSpin()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void CSpin::Initialize()
{
	SetTimeout(1);
}

// Called repeatedly when this Command is scheduled to run
void CSpin::Execute()
{
	Robot::shooter->Shoot();
}

// Make this return true when this Command no longer needs to run execute()
bool CSpin::IsFinished()
{
	return IsTimedOut();
}

// Called once after isFinished returns true
void CSpin::End()
{
	Robot::shooter->StopShoot();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CSpin::Interrupted()
{
	void CSpin::End();
}
