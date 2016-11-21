#include "CLoad.h"

CLoad::CLoad()
{
	Requires(Robot::shooter.get());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void CLoad::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void CLoad::Execute()
{
	Robot::shooter->ConvIn();
}

// Make this return true when this Command no longer needs to run execute()
bool CLoad::IsFinished()
{
	return Robot::shooter->Loaded();
}

// Called once after isFinished returns true
void CLoad::End()
{
	Robot::shooter->StopConv();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CLoad::Interrupted()
{
	End();
}
