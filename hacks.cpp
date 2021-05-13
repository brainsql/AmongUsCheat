#include <hacks.h>
#include <vars.hpp>
Vars vars;
void Hacks::Write()
{
	ULONG SpeedAddress			= Utils::GetAddress({ 0x5C, 0x4, 0x14 }); 
	ULONG CrewVisionAddress     = Utils::GetAddress({ 0x5C, 0x4, 0x18 });
	ULONG ImposterVisionAddress = Utils::GetAddress({ 0x5C, 0x4, 0x1C });

	if (vars.Speedhack)
		Utils::Write<FLOAT>(SpeedAddress, vars.Speed);

	if (vars.Crewmatehack)
		Utils::Write<FLOAT>(CrewVisionAddress, vars.CrewmateVision);

	if (vars.Imposterhack)
		Utils::Write<FLOAT>(ImposterVisionAddress, vars.ImposterVision);
	
}