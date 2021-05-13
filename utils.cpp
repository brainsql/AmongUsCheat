#include "utils.h"

ULONG Utils::GetAddress(std::vector<unsigned int> pointers)
{
	//Everytime among us updates, you will need to update this: 0x028EDF98 to the latest one.
	ULONG Address = (ULONG)GetModuleHandleA("GameAssembly.dll") + 0x028EDF98;
	for (ULONG i{ 0 }; i < pointers.size(); ++i)
	{
		Address = *reinterpret_cast<ULONG*>(Address);
		Address += pointers[i];
	}
	return Address;
}